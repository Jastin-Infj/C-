#include <iostream>
using namespace std;
class Sample
{
	int data_;
	friend class SampleFriend;		//privete�̃����o�����̃N���X�݂̂Ɍ��J�ł���
};
class SampleFriend
{
public:
	void Func(Sample& s) { s.data_ = 10; }		//�A�N�Z�X���\�ɂȂ��Ă���
};
class Sample2 : SampleFriend					//friend���p�����Ă���`�ŃA�N�Z�X�́E�E�E
{
	void output();
};
void Sample2::output()
{
	//�����ł͌��J�͂ł��Ȃ�
}