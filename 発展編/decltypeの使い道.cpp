#include <iostream>
using namespace std;
///C++14から戻り値の型推論ができるようになりました。

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
これで int64_t　とdoubleを比較することが可能になる
型推論の場所で T Uの違うので上手く通る
*/
template<typename T , typename U>
auto MyMax(const T &a, const U &b)
{
	return (a < b) ? b : a;
}

//☆☆☆☆//
///型が確定しない戻り値 : 複数のreturn文
/*
■ ? :　文を採用しない場合　decltypeを使用する
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
	/// mys.Func(3,4);	//コンパイルエラー　virtualなメンバー関数の場合はautoは使用できない
	cout << MyMax(4.2, 12) << endl;
	cout << MyMax2Return(4.2, 12); //コンパイルエラー　何故かは？C++11の機能のアルゴリズムの仕様
	cout << StdMax(4, 12) << endl; //12
	system("pause");
}