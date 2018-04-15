#include <iostream>
#include <string>
using namespace std;
class Human
{
	const int sei_;
	string name_;
public:
	Human();
	Human(int, const string&);
	void output();
};
Human::Human() : sei_(0), name_() {}
Human::Human(int sei, const string& name) : sei_(sei), name_(name) {}
void Human::output()
{
	string s;

	if (sei_ == 0)
	{
		s = name_ + "‚³‚ñ‚Í’j‚Å‚·";
	}
	else 
	{
		s = name_ + "‚³‚ñ‚Í—‚Å‚·";
	}
	cout << s << endl;
}
int main()
{
	Human member1(0, "adam");
	Human member2(1, "eve");
	member1.output();
	member2.output();

	Human member[2] =
	{
		Human(0,"adam"),
		Human(1,"eve")
	};
	member[0].output();
	member[1].output();

	system("pause");
	return 0;
}