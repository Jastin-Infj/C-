#include <iostream>
using namespace std;
class Shot
{
	static int Num;
public:
	void draw();
};
//int Shot::Num;				//���������̉�������
void Shot::draw()
{
	cout << &Num << endl;
}
int main()
{
	Shot shot[3];

	for (int i = 0; i < 3; ++i)
	{
		shot[i].draw();//�G���[�@LINK�G���[���������Ă��܂�
	}
	system("pause");
}