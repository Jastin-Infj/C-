#include <iostream>
using namespace std;
class Vec2
{
	float X, Y;
public:
	Vec2(float x_ = 0, float y_ = 0) : X(x_), Y(y_) {}
	int x();
};
int Vec2::x()
{
	return (int)X;
}
int main()
{
	Vec2 pos1(1.0f, 2.5f);
	Vec2 pos2;

	cout << pos1.x() << endl;
	cout << pos2.x() << endl;
	system("pause");
	return 0;
}