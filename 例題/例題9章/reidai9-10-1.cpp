#include <iostream>
int main()
{
	//‚±‚ê‚Í¶¬‚Å‚«‚È‚¢
	auto func [] = 
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

}