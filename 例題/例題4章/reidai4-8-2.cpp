#include <iostream>
#include <vector>
using namespace std;
class GameObject
{
public:
	virtual void update() = 0;			//�K���p����ŃI�[�o�[���C�h���Ăق����Ƃ��́@�������z�֐�
	virtual void rander() = 0;			//�p����ł̃I�[�o�[���C�h���K�{�ƂȂ�
};
class Player : public GameObject
{
public:
	void update()override { cout << "�v���C���ŗL��update" << endl; }					
};
class Enemy : public GameObject
{
	void rander()override { cout << "�G�l�~�[�ŗL�̕`�揈��" << endl; }
};
int main()
{
	GameObject a;		//�C���X�^���X�������悤�Ƃ���ƃG���[�ɂȂ�
						//1�ł��������z�֐������݂���ƃC���X�^���X���͎��s����
	system("pause");
	return 0;
}