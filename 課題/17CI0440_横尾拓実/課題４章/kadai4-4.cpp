#include <iostream>
#include <Windows.h>
class CounterBace
{
protected:
	float timeCnt;
public:
	CounterBace(float init)
		:
		timeCnt(init)
	{}
	virtual bool check() = 0;
	virtual bool now() = 0;
};
class CounterTime : public CounterBace
{
	using CounterBace::CounterBace;
	bool check();						//�J�E���g�̃^�C�����񂵂Ă��Ƃ�true��Ԃ�
	bool now();							//�J�E���g�̃^�C�����񂵂��o�ߎ��Ԃ�Ԃ�
};
bool CounterTime::check()
{
	float value = timeCnt * 1000;
	Sleep((DWORD)value);	//1�b 1000�~���b
	return true;
}
bool CounterTime::now()
{
	return true;
}
int main()
{
	CounterBace* c = new CounterTime(0.5f);				//0.5�b���Ƃ�true��Ԃ��J�E���^
	while (!(GetAsyncKeyState(VK_ESCAPE) & 0x8000))
	{
		if (c->check())
		{
			std::cout << c->now() << " ";
		}
	}
	delete c;
	system("pause");
}