#include <iostream>
using namespace std;
int main()
{
	[]()->void {cout << "�����_��" << endl; }();
	[](){cout << "�����_��" << endl; }();
	[] {cout << "�����_��" << endl; }();

	//�����_��a�ɑ�����Ăяo��
	auto a = [] {cout << "a�ɑ�����Ăяo��" << endl; };
	a();
	system("pause");
}