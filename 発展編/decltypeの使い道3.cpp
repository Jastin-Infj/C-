#include <iostream>
using namespace std;

/*
ここで勉強する場合

必要な知識
inline template ? : auto
*/

template<typename T>
struct Point
{
	T x;
	T y;
};
///型を変えるクラスを簡単に定義が可能にする
template<typename T, typename U>
inline auto operator*(const Point<T> &a, U b)
{
	return Point<decltype(a.x * b) >(a.x * b, a.y * b);
}

template<typename T , typename U>
inline auto operator*(const Point<T> &a, U b)-> Point<decltype(a.x * b)>
{
	return { a.x * b , a.y * b };
}
int main()
{
	Point<int> pos(3, 2) * 0.5; //(1.5 , 1.0)
	system("pause");
}