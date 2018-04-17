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
	shared_ptr<Sample> master(new Sample(10));

	//|------------------------------------------------------------------------------//|
	//|・ウィークポインタはシェアポインタからのみコピーができるスマートポインタである//|
	//|・shared_ptrの参照カウンタが増えません　単なる参照を増やしたい場合時に使用する//|
	//|------------------------------------------------------------------------------//|

	weak_ptr<Sample> shadow = master;

	//shadowからアクセスするのは手間がかかります
	shared_ptr<Sample>temp = shadow.lock();
	temp->output();
}
int main()
{
	output();
	system("pause");
}