#include <iostream>
#include <functional>
int main()
{
	std::function<void()> func[] = 
	{
		[]()->void 
		{
		    std::cout << "UŒ‚!" << std::endl;
		},
		[]()->void
		{
			std::cout << "–hŒä!" << std::endl;
		}
	};
	func[0]();
	func[1]();
	system("pause");
}