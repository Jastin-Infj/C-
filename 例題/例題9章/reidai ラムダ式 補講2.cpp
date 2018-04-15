#include <iostream>
using namespace std;

//ラムダ式によって　関数オブジェクトが作れる

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