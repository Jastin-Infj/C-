#include <iostream>
#include <Windows.h>
class CounterBace
{
protected:
	int now_, min_, max_;
	float timeCnt;
public:
	CounterBace(int init, int min, int max)
		:
		now_(init),
		min_(min),
		max_(max)
	{}
	CounterBace(float init)
		:
		timeCnt(init)
	{}
	virtual void forward() = 0;
	virtual int now() = 0;
};
class CounterA : public CounterBace
{
	using CounterBace::CounterBace;		//�X�[�p�[�N���X�̃R���X�g���N�^���Ăяo��
	void forward();						//�J�E���^����
	int now();							//���݂̒l���o�͂���
};
void CounterA::forward()
{
	if (now_ < max_)
	{
		now_++;
	}
	else
	{
		now_ = min_;
	}
}
int CounterA::now()
{
	return now_;
}
class CounterB : public CounterBace
{
	bool active = false;				//�J�E���^�̃t���O
	using CounterBace::CounterBace;		//�p���̃R���X�g���N�^���Ăяo��
	void forward();						//�J�E���^����
	int now();							//���݂̒l���o�͂���
};
void CounterB::forward()
{
	if (!active)
	{
		if (now_ < max_)
		{
			now_++;
		}
		if (now_ == max_)
		{
			active = true;
		}
	}
	else
	{
		if (now_ > min_)
		{
			now_--;
		}
		if (now_ == min_)
		{
			active = false;
		}
	}
}
int CounterB::now()
{
	return this->now_;
}
class CounterTime : public CounterBace
{
	float timeCnt;
	using CounterBace::CounterBace;
	void forward();						//�J�E���^����
	int now();							//���݂̒l���o�͂���
};
int main()
{
	CounterBace* c = new CounterTime(1.0f);
	while (!(GetAsyncKeyState(VK_ESCAPE) & 0x8000))
	{
		std::cout << c->now() << std::endl;
		c->forward();
		Sleep(100);
	}
	delete c;
	system("pause");
}