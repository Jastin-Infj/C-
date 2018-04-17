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
	shared_ptr<Sample> master(new Sample(10));

	//|------------------------------------------------------------------------------//|
	//|�E�E�B�[�N�|�C���^�̓V�F�A�|�C���^����̂݃R�s�[���ł���X�}�[�g�|�C���^�ł���//|
	//|�Eshared_ptr�̎Q�ƃJ�E���^�������܂���@�P�Ȃ�Q�Ƃ𑝂₵�����ꍇ���Ɏg�p����//|
	//|------------------------------------------------------------------------------//|

	weak_ptr<Sample> shadow = master;

	//shadow����A�N�Z�X����͎̂�Ԃ�������܂�
	shared_ptr<Sample>temp = shadow.lock();
	temp->output();
}
int main()
{
	output();
	system("pause");
}