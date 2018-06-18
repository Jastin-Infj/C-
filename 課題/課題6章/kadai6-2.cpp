#include <iostream>
#include <string>
class Sample
{
	int input();		//���͂���Ƃ���
	void output(int a, int b)const;
public:
	Sample();
};
Sample::Sample()
{
	try
	{
		int a = input();
		int b = input();
		output(a, b);
	}
	catch (const std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
int Sample::input()
{
	std::string text;
	std::cout << "�����̓��͂����Ă������� ";
	std::cin >> text;
	return std::stoi(text);
}
int main()
{
	Sample sample();
	system("pause");
	return 0;
}