#include <iostream>
using namespace std;
class Shot
{
	bool status_;			//�t���O�Ǘ�
	float x_, y_;			//�\�����W
	float addx_, addy_;		//1�t���[��������̈ړ���
	static int numShot_;	//��ʏ�ɏo�Ă���e���i�S�̂łЂƂ������݂��Ȃ��j
public:
	void create(float, float);
	void move();
	void vanish();
};
int Shot::numShot_;			//�@���������̉�������
void Shot::move()
{
	x_ += addx_;
	y_ += addy_;
}
void Shot::create(float x , float y)
{
	status_ = true;
	x_ = x;
	y_ = y_;
	++numShot_;
}
void Shot::vanish()
{
	status_ = false;
	--numShot_;
}
int main()
{
	system("pause");
	return 0;
}