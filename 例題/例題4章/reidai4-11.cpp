#include <iostream>
using namespace std;
class Sample1
{
	int i_;
public:
	Sample1() { cout << "a" << endl; }
	Sample1(int i) : i_(i) { cout << "b" << endl; }
};
class Sample2 : public Sample1
{
	int j_;
public:
	Sample2() { cout << "c" << endl; }
	Sample2(int j) :j_(j) { cout << "d" << endl; }
	Sample2(int i, int j) : Sample1(i), j_(j) { cout << "e" << endl; }
};
int main()
{
	Sample2 a;			//ac
	Sample2 b(10);		//ad
	Sample2 c(10, 20);  //bc
	system("pause");
	return 0;
}