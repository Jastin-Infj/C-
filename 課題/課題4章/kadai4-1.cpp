#include <iostream>
#include <string>
#include <vector>
using namespace std;
//]‹Æˆõ
struct Employee
{
	int no;						//Ğˆõ”Ô†
	string name;				//–¼‘O
	string department;			//•”–å
};
//ŠÇ—E
struct Manager : public Employee
{
	vector<Employee*>group;     //•”‰ºî•ñ
};

class ParttimeJob : public Employee
{
	int horloyWage;				//‹‹
};

