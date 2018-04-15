#include <iostream>
#include <vector>
using namespace std;
class Vec2
{
	int x, y;
public:
	Vec2(int x_ = 0, int y_ = 0) : x(x_),y(y_){}
	void output()const;
	int operator+(const Vec2& r);
};
int Vec2::operator+(const Vec2& r)
{
	return r.x + r.y;
}
void Vec2::output()const
{
	cout << &Vec2::operator+ << endl;
}
int main()
{
	vector<Vec2> pos;
	pos.push_back(Vec2(1, 2));
	pos.push_back(Vec2(7));
	pos.push_back(Vec2());
	for (const Vec2& p : pos)
	{
		p.output();
	}
	system("pause");
	return 0;
}