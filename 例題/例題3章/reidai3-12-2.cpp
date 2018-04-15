#include <iostream>
using namespace std;
class Sample
{
	int data_;
	friend class SampleFriend;		//priveteのメンバを特定のクラスのみに公開できる
};
class SampleFriend
{
public:
	void Func(Sample& s) { s.data_ = 10; }		//アクセスが可能になっている
};
class Sample2 : SampleFriend					//friendを継承している形でアクセスは・・・
{
	void output();
};
void Sample2::output()
{
	//ここでは公開はできない
}