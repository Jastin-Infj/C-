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
	Emplyoee* a = new Manager();		//�錾�^���e�����������������Ƃł��Ă���
}
