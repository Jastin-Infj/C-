#include <iostream>
using namespace std;

//C++11の機能

/*
■ プロトタイプ宣言に使用することできる。主に関数のフックなどで役に立つ
*/

/*
■ 関数の戻り値の型を得ることができる
decltype(dosomething())result;
*/

int dosomething(int);
double dosomething(double);
decltype(dosomething(1))n; // n is int
decltype(dosomething(1.0))df;// df is double

/*
std::declvalと組み合わせたSFINAEがいいやり方
*/
class hoge {};
class hage {};
class huge {};
class hige {};
hoge dosomething(hage);
huge dosomething(hige);
decltype(dosomething(declval<hage>()))abc;//abc = hog
decltype(dosomething(declval<hige>()))xyz;//xyz = hug

/*
引数から型を読み取るみたいな感じ？
*/
int main()
{

}