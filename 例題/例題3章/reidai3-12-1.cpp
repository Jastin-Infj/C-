#include <iostream>
#include <string>
using namespace std;
class Sample
{
	string s_;
public:
	static void type() { cout << s_ << endl; }
	static void output();
};
static void Sample::output()
{
	this->//this->���g�p�s��
	//�����ł͏������Ƃ��s�\ 
}
int main()
{
	Sample::type();		//Sample�^�̕ϐ��錾���Ȃ��āA��������ɑ��݂��Ȃ����Ƃ������Ă���
	system("pause");
	return 0;
}
