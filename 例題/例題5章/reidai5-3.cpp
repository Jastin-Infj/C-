#include <iostream>
using namespace std;
class Sample
{
	int v_;
public:
	void set(int v) { v_ = v; }
	void output()const { cout << v_ << endl; }
	Sample() { cout << "create" << endl; }
	~Sample() { cout << "delete" << endl; }
};
int main()
{
	Sample* master;
	Sample* shadow;

	master = new Sample; //�C���X�^���X��
	shadow = master;     //�����ꏊ���w��
	master->set(100);
	shadow->output();
	delete shadow;
	system("pause");
}
//���̏ꍇ���������[�N�͋N���Ȃ��@�Ȃ����H�@�����I�u�W�F�N�g���w���Ă��邩��
//�܂�Amaster���ꏏ�ɏ����Ă���Ƃ�������