#include <iostream>
int main()
{
	int i = 10;

	std::cout << &i << std::endl;
	std::cout << i << std::endl;
	//�Q�ƃL���v�`���@
	auto inc = [&i]()->void
	{
		//�A�h���X�l
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