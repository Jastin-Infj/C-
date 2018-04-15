#include <iostream>
using namespace std;
class Sample
{
	int v_;
public:
	void set(int v) { v_ = v; }
	void output()const { cout << v_ << endl; }
	Sample(int v) : v_(v) { cout << "create2" << endl; }
	~Sample() { cout << "delete" << endl; }
};
void func(const Sample* a, const Sample* b)
{
	delete a;  //constでもdelete可能で、他人に書かれてしまう可能性あり
}
int main()
{
	Sample* master;
	Sample* shadow;

	master = new Sample(10); //インスタンス化
	shadow = new Sample(20); //インスタンス化

	func(master, shadow);

	master->output(); //削除済み
	shadow->output();

	//不安定な処理になる（VC++）
	delete master;
	delete shadow;
	system("pause");
}
//ビルドは成功する