#include <iostream>
using namespace std;
class Bace
{
	int x_;
public:
	Bace(int x) : x_(x) {}
	void output()const { cout << x_ << endl; }
};
class Player : public Bace
{
public:
	Player() : Bace(10) { cout << "Playerのコンストラクタ" << endl; }	//ここでコンストラクタ初期化子をいれれば動く
};
int main()
{
	Player p;
	p.output();
	system("pause");
}