#include <iostream>
#include <memory>
using namespace std;
class Sample
{
	Sample* target_;		//�_���Ă��鑊��ւ̃|�C���^
public:
	void setTarget(Sample* target) { target_ = target; }
};
void output()
{
	Sample* player = new Sample;
	Sample* enemy = new Sample;

	//|-------------------------------------------------------------------|//
	//|���炩�̏����ŁAenemy�������Ă��܂���                              |//
	//|��@��ʊO�ɏo�Ă��܂����A���̃v���C�����G��������Ă��܂����Ȃ� |//
	//|___________________________________________________________________|//

	player->setTarget(enemy);
	delete enemy;

	///player��target_���Q�Ƃ���ƁE�E�E�G���[�ɂȂ��Ă��܂�
	///�����@VS�@�����̏�������ɔ��W����\��������
	
}
int main()
{
	output();
	system("pause");
	return 0;
}