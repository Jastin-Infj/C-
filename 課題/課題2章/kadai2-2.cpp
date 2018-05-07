#include <iostream>
#include <string>
using namespace std;
class Month
{
public:
	void input();			//�R���\�[�����猎�����
	int getMonth();			//���𐔒l�Ŏ擾
	string getMonthName();	//�����p��Ŏ擾
private:
	int m_ = 0;
};
void Month::input()
{
	while (true)
	{
		cout << "������͂��Ă�������(1����12�܂�)�F";
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
	cout << m.getMonth() << "����" << m.getMonthName() << endl;
	system("pause");
	return 0;
}