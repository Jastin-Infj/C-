#include <iostream>
#include <memory>
using namespace  std;

class Sample
{
	int v_;
public:
	void output()const { cout << v_ << endl; }
	Sample(int v) : v_(v) { cout << "create2" << endl; }
	~Sample() { cout << "delete" << endl; }
};

int main()
{
	shared_ptr<Sample> master(new Sample(200));
	shared_ptr<Sample> shadow = master;
	master->output();
	shadow->output();

	system("pause");
	return 0;
}