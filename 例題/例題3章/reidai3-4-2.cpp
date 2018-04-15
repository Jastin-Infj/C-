#include <iostream>
using namespace std;
class Human
{
	int atk_;
public:
	Human(int atk = 0) :atk_(atk) {}
	void atk(int atk) { atk_ = atk; }
};
int main()
{
	Human cain(20);
	cain.atk(22);
	system("pause");
	return 0;
}