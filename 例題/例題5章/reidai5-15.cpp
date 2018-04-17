#include <iostream>
#include <memory>
using namespace std;

//|--------------------------------------------------|//
//|�R�s�[���������Ȃ��I�u�W�F�N�g�𐶐�����ꍇ�Ɏg�p|//
//|__________________________________________________|//

class Sample
{
	int v_;
public:
	void output()const { cout << v_ << endl; }
	Sample(int v) : v_(v) { cout << "create" << endl; }
	~Sample() { cout << "delete" << endl; }
};
//�����́������ƃR�s�[�ɂȂ�̂ŃR���p�C���G���[�ƂȂ�
void func(const std::unique_ptr<Sample>& n)
{
	n->output();
}
void output()
{
	unique_ptr<Sample> n(new Sample(100));
	//std::unique_ptr<Sample> s = n; //�R�s�[���o���Ȃ�
	func(n);

	///���Ő錾�������̂�������邪�A�f�X�g���N�^�ŕs�����������
	Sample master(100);
	unique_ptr<Sample> n(&master);
}

int main()
{
	output();
	system("pause");
}
