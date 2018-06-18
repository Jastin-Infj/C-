#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>
float T (const float x, const float y)
{
	if (x == 0)
	{
		throw std::exception::exception("—áŠO‚ª”­¶‚µ‚Ü‚µ‚½");
	}
	return std::tan(y / x);
}
int main()
{
	float x, y, tan;
	std::cout << "x : ";
	std::cin >> x;
	std::cout << "y : ";
	std::cin >> y;

	try
	{
		tan = T(x,y);
		std::cout << tan << std::endl;
	}
	catch (std::exception e) 
	{
		std::cout << e.what() << std::endl;
	}
	system("pause");
}
	
	