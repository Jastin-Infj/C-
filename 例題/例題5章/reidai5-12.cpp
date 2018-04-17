#include <iostream>
#include <memory>
using namespace std;

class Sample
{
	int v_;
public:
	void set(int v) { v_ = v; }
	void output() { cout << v_ << endl; }
	Sample(int v) : v_(v) { cout << "create2" << endl; }
	Sample(const Sample& s) { v_ = s.v_; cout << "copy" << endl; }
	~Sample() { cout << "delete" << endl; }
};
void output()
{
	weak_ptr<Sample> shadow;
	{
		shared_ptr<Sample> master(new Sample(10));
		shadow = master;
	}///ここでmasterの中にあるデータのデストラクタが呼ばれる
	if (shadow.expired())
	{
		cout << "shadowの参照先は削除済みです" << endl;
	}
	else
	{
		///ウィークポインタでは参照は出来ないのでlock()をしてシェアポインタに変換する必要がある
		shared_ptr<Sample> temp = shadow.lock();
		temp->output(); ///shadow.lock()->output();
	}
}
int main()
{
	output();
	system("pause");
}