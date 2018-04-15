#include <iostream>
using namespace std;

//const {  このスコープ内では値が変化しないことを保障される  }

class Human
{
	int atk_;
public:
	Human(int atk = 0) :atk_(atk) {}
	int atk() { return atk_; }
};
int main()
{
	Human cain(20);
	cout << cain.atk() << endl;
	system("pause");
	return 0;
}

//const が付いてないと・・・
void Func(const Human& h)
{
	cout << h.atk() << endl; //エラー　atk()constにすれば解決をする
}