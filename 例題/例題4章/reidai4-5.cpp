#include <string>
#include <vector>
using namespace std;
class Emplyoee
{
	int no;				//�Ј��ԍ�
	string name;		//���O
	string department;  //����
};
class Manager : public Emplyoee
{
	//Emplyoee employeeInfo;
	vector<Emplyoee*> group;
};
int main()
{
	vector<Emplyoee*>objs;
	objs.push_back(new Emplyoee);
	objs.push_back(new Manager);
	for (size_t i = 0; i < objs.size(); ++i)
	{
		delete objs[i];
	}
}
