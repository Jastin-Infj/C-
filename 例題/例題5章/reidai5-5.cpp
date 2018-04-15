#include <iostream>
using namespace std;
class Sample
{
	int v_;
public:
	void set(int v) { v_ = v; }
	void output()const { cout << v_ << endl; }
	Sample(int v) : v_(v) { cout << "create2" << endl; }
	~Sample() { cout << "delete" << endl; }
};
void func(const Sample* a, const Sample* b)
{
	delete a;  //const�ł�delete�\�ŁA���l�ɏ�����Ă��܂��\������
}
int main()
{
	Sample* master;
	Sample* shadow;

	master = new Sample(10); //�C���X�^���X��
	shadow = new Sample(20); //�C���X�^���X��

	func(master, shadow);

	master->output(); //�폜�ς�
	shadow->output();

	//�s����ȏ����ɂȂ�iVC++�j
	delete master;
	delete shadow;
	system("pause");
}
//�r���h�͐�������