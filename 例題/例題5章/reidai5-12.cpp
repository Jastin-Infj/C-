#include <iostream>
#include <memory>
using namespace std;

class Sample
{
	int v_;
public:
	void set(int v) { v_ = v; }
	void output() { cout << v_ << endl; }
	Sample(int v) : v_(v) { cout << "create2" << endl; }
	Sample(const Sample& s) { v_ = s.v_; cout << "copy" << endl; }
	~Sample() { cout << "delete" << endl; }
};
void output()
{
	weak_ptr<Sample> shadow;
	{
		shared_ptr<Sample> master(new Sample(10));
		shadow = master;
	}///������master�̒��ɂ���f�[�^�̃f�X�g���N�^���Ă΂��
	if (shadow.expired())
	{
		cout << "shadow�̎Q�Ɛ�͍폜�ς݂ł�" << endl;
	}
	else
	{
		///�E�B�[�N�|�C���^�ł͎Q�Ƃ͏o���Ȃ��̂�lock()�����ăV�F�A�|�C���^�ɕϊ�����K�v������
		shared_ptr<Sample> temp = shadow.lock();
		temp->output(); ///shadow.lock()->output();
	}
}
int main()
{
	output();
	system("pause");
}