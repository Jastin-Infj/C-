#include <iostream>
using namespace std;
class Human
{
	int atk_;
public:
	Human(int atk = 0) :atk_(atk) {}
	void Levelup();
};
void Human::Levelup()
{
	atk_ += 2;
}
int main()
{
	Human canin(20);
	canin.Levelup();
	system("pause");
	return 0;
}