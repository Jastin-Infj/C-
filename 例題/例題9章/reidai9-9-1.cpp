#include <iostream>
int main()
{
	int i, j;
	std::cin >> i >> j;
	std::cout << "i " << &i << std::endl;
	//�R�s�[�L���v�`�����g�p����
	auto func1 = [i]()->void
	{
		//�R�s�[�R���X�g���N�^�̂悤�Ȍ`�ɂȂ�
		//�A�h���X�l�͓����Ƃ���ł͂Ȃ�
		std::cout << i << std::endl;
		std::cout << "i " << &i << std::endl;
	};
	//�R�s�[�L���v�`�����g�p����
	auto func2 = [i, j]()->void
	{
		std::cout << "i " << &i << std::endl;
		std::cout << "j " << &j << std::endl;
		std::cout << i + j << std::endl;
	};
	//�S�Ẵ��[�J���ϐ����Q�ƃL���v�`��
	auto func3 = [=]()->void
	{
		std::cout << "i " << &i << std::endl;
		std::cout << "j " << &j << std::endl;
		std::cout << i + j << std::endl;
	};
	//�R�s�[�L���v�`���͂��ׂ�const�����I�I
	auto func4 = [i]()->void
	{
		std::cout << ++i << std::endl;
	}
	func1();
	func2();
	func3();
	system("pause");
}