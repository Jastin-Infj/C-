#include <iostream>
#include <memory>
using namespace std;
class Sample
{
	int v;
public:
	Sample(int v_) : v(v_) { cout << "create2" << endl; }
	~Sample() { cout << "delete" << endl; }
	void output()const { cout << v << endl; }
};
void output()
{
	shared_ptr<Sample> master(new Sample(20));
	//typedef shared_ptr<Sample> SamplePtr;
	using SamplePtr = shared_ptr<Sample>;
	SamplePtr shadow(new Sample(200));

	//|------------------------------------------------------------------|//
	//|master���㏑������A�Q�ƃJ�E���^���O�ɂȂ�A�f�X�g���N�^���Ă΂��|//
	//|__________________________________________________________________|//

	master = shadow; //�A�h���X�l��ύX����			//���������[�N���N���Ă��܂�
	master->output();
}
int main()
{
	output();
	system("pause");
	return 0;
}