#include <iostream>
using namespace std;
int main()
{
	[]()->void {cout << "ラムダ式" << endl; }();
	[](){cout << "ラムダ式" << endl; }();
	[] {cout << "ラムダ式" << endl; }();

	//ラムダをaに代入し呼び出し
	auto a = [] {cout << "aに代入し呼び出し" << endl; };
	a();
	system("pause");
}