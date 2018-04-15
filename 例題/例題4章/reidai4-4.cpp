#include <string>
#include <vector>
using namespace std;
class Emplyoee
{
	int no;				//Ğˆõ”Ô†
	string name;		//–¼‘O
	string department;  //•”–å
};
class Manager : public Emplyoee
{
	//Emplyoee employeeInfo;
	vector<Emplyoee*> group;
};
int main()
{
	Emplyoee* a = new Manager();		//éŒ¾Œ^‚ªe‚¾‚ª‘ã“ü‚à‚µ‚Á‚©‚è‚Æ‚Å‚«‚Ä‚¢‚é
}
