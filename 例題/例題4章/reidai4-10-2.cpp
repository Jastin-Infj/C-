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
	Player() : Bace(10) { cout << "Player�̃R���X�g���N�^" << endl; }	//�����ŃR���X�g���N�^�������q�������Γ���
};
int main()
{
	Player p;
	p.output();
	system("pause");
}