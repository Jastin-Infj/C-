#include <iostream>
using namespace std;
class Shot
{
	bool status_;			//フラグ管理
	float x_, y_;			//表示座標
	float addx_, addy_;		//1フレームあたりの移動量
	static int numShot_;	//画面上に出ている弾数（全体でひとつしか存在しない）
public:
	void create(float, float);
	void move();
	void vanish();
};
int Shot::numShot_;			//　☆☆☆実体化☆☆☆
void Shot::move()
{
	x_ += addx_;
	y_ += addy_;
}
void Shot::create(float x , float y)
{
	status_ = true;
	x_ = x;
	y_ = y_;
	++numShot_;
}
void Shot::vanish()
{
	status_ = false;
	--numShot_;
}
int main()
{
	system("pause");
	return 0;
}