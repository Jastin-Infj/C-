#include <iostream>
#include <string>
using namespace std;
class Vec2
{
	float x_, y_;
public:
	Vec2(float x = 0.0f, float y = 0.0f)
		:x_(x),
		y_(y)
	{
	}
	void output(const string& msg)const
	{
		cout << msg << x_ << " " << y_ << endl;
	}
	void set(float x , float y)
	{
		x_ = x;
		y_ = y;
	}
	void set(Vec2& pos)
	{
		x_ = pos.x_;
		y_ = pos.y_;
	}
	void offset(Vec2& pos)
	{
		x_ += pos.x_;
		y_ += pos.y_;
	}
	void offset(float value)
	{
		x_ += value;
		y_ += value;
	}
	Vec2& operator+(const Vec2& pos)
	{
		x_ += pos.x_;
		y_ += pos.y_;
		return *this;
	}
};
int main()
{
	Vec2 pos1(1.5f, 2.5f);
	Vec2 pos2;
	//set()
	pos2.set(10.5f, 22.2f);
	pos2.output("1:");
	//他の変数からコピーができる
	Vec2 pos3;
	pos3.set(pos2);
	pos3.output("2:");
	//オフセットできる
	pos1.offset(Vec2(10.0f, 0.5f));
	pos1.output("3:");
	//全てのメンバをオフセットできる
	pos2.offset(2.0f);
	pos2.output("4:");
	//+をオーバーロードして計算できる
	pos1.set(10.0f, 20.f);
	pos2.set(5.0f, 7.0f);
	pos3 = pos1 + pos2;
	pos3.output("5:");
	system("pause");
	return 0;
}