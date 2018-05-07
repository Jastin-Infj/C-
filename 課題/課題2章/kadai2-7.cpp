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
};
Counter::Counter(int initval, unsigned int addval, int min, int max)
{

}
void Counter::operator=(int cnt)
{
	now_ = cnt;
}
int Counter::operator()()const
{
	return now_;
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
	cout << "³‡";

	system("pause");
	return 0;
}