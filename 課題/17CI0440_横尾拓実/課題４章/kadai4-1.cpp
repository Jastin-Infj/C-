#include <iostream>
#include <string>
#include <vector>
using namespace std;
//�]�ƈ�
struct Employee
{
	int no;						//�Ј��ԍ�
	string name;				//���O
	string department;			//����
};
//�Ǘ��E
struct Manager : public Employee
{
	vector<Employee*>group;     //�������
};

class ParttimeJob : public Employee
{
	int horloyWage;				//����
};

