#include <iostream>
int main()
{
	int i = 10;

	std::cout << &i << std::endl;
	std::cout << i << std::endl;
	//参照キャプチャ　
	auto inc = [&i]()->void
	{
		//アドレス値
		std::cout << &i << std::endl;
		++i;
		std::cout << i << std::endl;
	};
	auto func = [&]()->void
	{
		std::cout << &i << std::endl;
		std::cout << --i << std::endl;
		std::cout << i << std::endl;
	};
	inc();
	inc();
	func();

	system("pause");
}