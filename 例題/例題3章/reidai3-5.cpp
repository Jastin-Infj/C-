#include <iostream>
using namespace std;

//const {  ���̃X�R�[�v���ł͒l���ω����Ȃ����Ƃ�ۏႳ���  }

class Human
{
	int atk_;
public:
	Human(int atk = 0) :atk_(atk) {}
	int atk() { return atk_; }
};
int main()
{
	Human cain(20);
	cout << cain.atk() << endl;
	system("pause");
	return 0;
}

//const ���t���ĂȂ��ƁE�E�E
void Func(const Human& h)
{
	cout << h.atk() << endl; //�G���[�@atk()const�ɂ���Ή���������
}