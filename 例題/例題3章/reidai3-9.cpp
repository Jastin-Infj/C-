#include <iostream>
#include <string>
using namespace std;
class Int
{
	int v_;
public:
	Int(int v) : v_(v) {}
	int get()const { return v_; }
	string toString()const { return "int"; }
};
void output(const Int& i)//const で受け取ると・・・
{
	cout << i.toString() << i.get() << endl;//エラー　このメソッドが呼べない
	//値が変わらないと保障をしているが、関数自体は変更が出来るという曖昧になってしまうエラー
}
int main()
{
	Int i(0);
	system("pause");
	return 0;
}