#include <iostream>
#include <exception>
int F(const int w, const int h)
{
	//0以下
	if (w < 0 || h < 0)
	{
		throw "辺がマイナスになっています";
	}
	return w * h;
}
int main()
{
	int w, h;
	std::cin >> w >> h;
	try
	{
		auto total = F(w, h);
		std::cout << "面積は" << total << std::endl;
	}
	catch (const char* errormsg)
	{
		std::cout << errormsg;
	}

	//std::exception& e　で行う場合　what()を使用する
	system("pause");
}