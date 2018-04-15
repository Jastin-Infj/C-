#include <iostream>
#include <vector>
using namespace std;
class GameObject
{
public:
	virtual void update() = 0;			//必ず継承先でオーバーライドしてほしいときは　純粋仮想関数
	virtual void rander() = 0;			//継承先でのオーバーライドが必須となる
};
class Player : public GameObject
{
public:
	void update()override { cout << "プレイヤ固有のupdate" << endl; }					
};
class Enemy : public GameObject
{
	void rander()override { cout << "エネミー固有の描画処理" << endl; }
};
int main()
{
	GameObject a;		//インスタンス化をしようとするとエラーになる
						//1つでも純粋仮想関数が存在するとインスタンス化は失敗する
	system("pause");
	return 0;
}