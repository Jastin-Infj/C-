#include <iostream>
#include <string>
using namespace std;
class Sample
{
	string s_;
public:
	static void type() { cout << s_ << endl; }
	static void output();
};
static void Sample::output()
{
	this->//this->も使用不可
	//ここでは書くことが不可能 
}
int main()
{
	Sample::type();		//Sample型の変数宣言がなくて、メモリ上に存在しないことを示している
	system("pause");
	return 0;
}
