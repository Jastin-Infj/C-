#include <iostream>
#include <string>
using namespace std;
class Int
{
	int v_;
public:
	Int(int v) : v_(v) {}
	int get()const { return v_; }
	string toString()const { return "int"; }
};
void output(const Int& i)//const �Ŏ󂯎��ƁE�E�E
{
	cout << i.toString() << i.get() << endl;//�G���[�@���̃��\�b�h���ĂׂȂ�
	//�l���ς��Ȃ��ƕۏ�����Ă��邪�A�֐����͕̂ύX���o����Ƃ����B���ɂȂ��Ă��܂��G���[
}
int main()
{
	Int i(0);
	system("pause");
	return 0;
}