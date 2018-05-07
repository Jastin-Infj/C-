#include <iostream>
#include <string>
using namespace std;
class Month
{
public:
	void input();			//コンソールから月を入力
	int getMonth();			//月を数値で取得
	string getMonthName();	//月を英語で取得
private:
	int m_ = 0;
};
void Month::input()
{
	while (true)
	{
		cout << "月を入力してください(1から12まで)：";
		cin >> m_;
		if (m_ >= 1 && m_ <= 12)
		{
			break;
		}
	}
}
int Month::getMonth()
{
	return m_;
}
string Month::getMonthName()
{
	string table[12] = 
	{ "January","February","March" ,"April" ,
		"May" ,"June" ,"July" ,"August",
		"September" ,"October" ,"November" ,"December"
	};
	return table[m_ - 1];
}

int main()
{
	Month m;
	m.input();
	cout << m.getMonth() << "月は" << m.getMonthName() << endl;
	system("pause");
	return 0;
}