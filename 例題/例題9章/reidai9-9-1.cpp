#include <iostream>
int main()
{
	int i, j;
	std::cin >> i >> j;
	std::cout << "i " << &i << std::endl;
	//コピーキャプチャを使用する
	auto func1 = [i]()->void
	{
		//コピーコンストラクタのような形になる
		//アドレス値は同じところではない
		std::cout << i << std::endl;
		std::cout << "i " << &i << std::endl;
	};
	//コピーキャプチャを使用する
	auto func2 = [i, j]()->void
	{
		std::cout << "i " << &i << std::endl;
		std::cout << "j " << &j << std::endl;
		std::cout << i + j << std::endl;
	};
	//全てのローカル変数を参照キャプチャ
	auto func3 = [=]()->void
	{
		std::cout << "i " << &i << std::endl;
		std::cout << "j " << &j << std::endl;
		std::cout << i + j << std::endl;
	};
	//コピーキャプチャはすべてconst属性！！
	auto func4 = [i]()->void
	{
		std::cout << ++i << std::endl;
	}
	func1();
	func2();
	func3();
	system("pause");
}