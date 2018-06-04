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
	bool check();						//カウントのタイムを回してあとにtrueを返す
	bool now();							//カウントのタイムを回した経過時間を返す
};
bool CounterTime::check()
{
	float value = timeCnt * 1000;
	Sleep((DWORD)value);	//1秒 1000ミリ秒
	return true;
}
bool CounterTime::now()
{
	return true;
}
int main()
{
	CounterBace* c = new CounterTime(0.5f);				//0.5秒ごとにtrueを返すカウンタ
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