#include <iostream>
#include <exception>
int F(const int w, const int h)
{
	//0�ȉ�
	if (w < 0 || h < 0)
	{
		throw "�ӂ��}�C�i�X�ɂȂ��Ă��܂�";
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
		std::cout << "�ʐς�" << total << std::endl;
	}
	catch (const char* errormsg)
	{
		std::cout << errormsg;
	}

	//std::exception& e�@�ōs���ꍇ�@what()���g�p����
	system("pause");
}