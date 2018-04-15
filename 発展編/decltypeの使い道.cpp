#include <iostream>
using namespace std;
///C++14����߂�l�̌^���_���ł���悤�ɂȂ�܂����B

template<typename T>
auto StdMax(const T &a, const T &b)
{
	return (a < b) ? b : a;
}
template<typename T>
class Mys
{
public:
	auto Func_(const T &a, const T &b)
	{
		return (a < b) ? b : a;
	}
	/*virtual auto Func(const T &a, const T &b)
	{
		return (a < b) ? b : a;
	}*/
};
Mys<int> mys;

/*
����� int64_t�@��double���r���邱�Ƃ��\�ɂȂ�
�^���_�̏ꏊ�� T U�̈Ⴄ�̂ŏ�肭�ʂ�
*/
template<typename T , typename U>
auto MyMax(const T &a, const U &b)
{
	return (a < b) ? b : a;
}

//��������//
///�^���m�肵�Ȃ��߂�l : ������return��
/*
�� ? :�@�����̗p���Ȃ��ꍇ�@decltype���g�p����
*/
template<typename T , typename U>
auto MyMax2Return(const T &a, const U &b)->decltype(a + b)
{
	if (a < b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
int main()
{
	/// mys.Func(3,4);	//�R���p�C���G���[�@virtual�ȃ����o�[�֐��̏ꍇ��auto�͎g�p�ł��Ȃ�
	cout << MyMax(4.2, 12) << endl;
	cout << MyMax2Return(4.2, 12); //�R���p�C���G���[�@���̂��́HC++11�̋@�\�̃A���S���Y���̎d�l
	cout << StdMax(4, 12) << endl; //12
	system("pause");
}