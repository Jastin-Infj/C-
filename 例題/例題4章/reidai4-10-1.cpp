#include <iostream>
using namespace std;
class Bace
{
	int x_;
public:
	Bace(int x) : x_(x) {}
	void output()const { cout << x_ << endl; }
};
class Player : public Bace
{
public:
	Player() { cout << "Player�̃R���X�g���N�^" << endl; }		//�p�����ɃR���X�g���N�^�����݂��Ȃ��̂ŃG���[
	//�R���X�g���N�^���ȗ�����Ɓ@�f�t�H���g�R���X�g���N�^�������I�ɐ�������邪�A�����t���Ȃ̂ŃG���[�ƂȂ�
};
int main()
{
	Player p;
	p.output();
	system("pause");
}