#include <iostream>

#include <random>
#include <time.h>
class Kazuate
{
	int seikai_;	//����l
	int yosou_;		//�\�z�l
public:
	void input();	//�\�z����l����͂���
	bool judge();	//�\�z�����l�Ɣ��肷��
	Kazuate();
	bool result();	//���ʂ��o��
};
Kazuate::Kazuate()
{
	srand((unsigned int)time(NULL));

	//�����I�ɓ��͂���点��
	input();
}
void Kazuate::input()
{
	yosou_ = -1;		//�s��l���Œ肳����
	while (yosou_ <= 0 || yosou_ > 9)
	{
		std::cout << "0-9�܂ł̐��𓖂ĂĂ�������";
		std::cin >> yosou_;
	}
}
bool Kazuate::judge()
{
	seikai_ = rand() % 10;
	if (seikai_ == yosou_)
	{
		return true;
	}
	return false;
}
bool Kazuate::result()
{
	if (judge())
	{
		std::cout << "����" << std::endl;
		return true;
	}
	else
	{
		std::cout << "�s�����I������" << seikai_ << "�ł���" << std::endl;
	}
	return false;
}

int main()
{
	Kazuate k;
	k.result();
	system("pause");
}