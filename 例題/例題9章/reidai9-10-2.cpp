#include <iostream>
#include <functional>
int main()
{
	std::function<void()> func[] = 
	{
		[]()->void 
		{
		    std::cout << "�U��!" << std::endl;
		},
		[]()->void
		{
			std::cout << "�h��!" << std::endl;
		}
	};
	func[0]();
	func[1]();
	system("pause");
}