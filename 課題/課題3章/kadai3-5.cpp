#include <iostream>

#include <random>
#include <time.h>
class Kazuate
{
	int seikai_;	//正解値
	int yosou_;		//予想値
public:
	void input();	//予想する値を入力する
	bool judge();	//予想した値と判定する
	Kazuate();
	bool result();	//結果を出力
};
Kazuate::Kazuate()
{
	srand((unsigned int)time(NULL));

	//自動的に入力をやらせる
	input();
}
void Kazuate::input()
{
	yosou_ = -1;		//不定値を固定させる
	while (yosou_ <= 0 || yosou_ > 9)
	{
		std::cout << "0-9までの数を当ててください";
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
		std::cout << "正解" << std::endl;
		return true;
	}
	else
	{
		std::cout << "不正解！正解は" << seikai_ << "でした" << std::endl;
	}
	return false;
}

int main()
{
	Kazuate k;
	k.result();
	system("pause");
}