#include <string>
#include <vector>
using namespace std;
class Emplyoee
{
	int no;				//社員番号
	string name;		//名前
	string department;  //部門
};
class Manager : public Emplyoee
{
	//Emplyoee employeeInfo;
	vector<Emplyoee*> group;
};
int main()
{
	Emplyoee* a = new Manager();		//宣言型が親だが代入もしっかりとできている
}
