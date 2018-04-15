#include <iostream>
using namespace std;
class Vec2
{
	float X, Y;
public:
	Vec2(float x_ = 0) : X(0){}
	int x();
};
int Vec2::x()
{
	return (int)X;
}
int main()
{
	Vec2 pos;
	cout << pos.x() << endl;
	system("pause");
	return 0;
}