#include <iostream>
int main()
{
	//����͐����ł��Ȃ�
	auto func [] = 
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

}