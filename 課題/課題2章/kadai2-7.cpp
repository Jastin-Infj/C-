#include <iostream>
using namespace std;
class Counter
{
	int now_, addval_, min_, max_;
public:
	Counter(int, unsigned int, int, int);
	void UpDate();
	void operator=(int);
	int operator()()const;
	int operator++();
	int operator--();
};
Counter::Counter(int initval, unsigned int addval, int min, int max)
{
	now_ = initval;
	addval_ = addval;
	min_ = min;
	max_ = max;
}
void Counter::operator=(int cnt)
{
	now_ = cnt;
}
int Counter::operator()()const
{
	return now_;
}
int Counter::operator++()
{
	return now_++;
}
int Counter::operator--()
{
	return now_--;
}
void Counter::UpDate()
{
	if (now_ >= min_ && now_ <= max_)
	{
		now_ += addval_;
	}
}
int main()
{
	Counter cnt(0, 1, -2, 3);
	cout << "正順";
	for (int i = 0; i < 15; ++i,++cnt)
	{
		cout << cnt() << "  ";	//　オペレーター式　now_を返す
	}
	cout << endl;
	cout << "逆順";
	for (int i = 0; i < 15; ++i, --cnt)
	{
		cout << cnt() << "  ";
	}
	system("pause");
	return 0;
}