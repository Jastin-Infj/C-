#include <iostream>
using namespace std;

//�����_���ɂ���ā@�֐��I�u�W�F�N�g������

struct F
{
	auto operator()(int a, int b)const-> decltype(a + b)
	{
		return a + b;
	}
};
int main()
{

}