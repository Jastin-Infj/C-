#include <iostream>
#include <vector>
using namespace std;
class GameObject
{
public:
	virtual void update() { cout << "毎フレーム呼ばれる処理" << endl; }		//継承先で処理を上書きできることを示す（オーバーライド）
	virtual void rander() { cout << "描画処理" << endl; }
};
class Player : public GameObject
{
public:
	void update() {cout << "プレイヤ固有のupdate" << endl;}					//GameObject::update()を呼ぶことも可能
};
class Enemy : public GameObject
{
	void rander() { cout << "エネミー固有の描画処理" << endl; }
};
int main()
{
	vector<GameObject*> objs;
	objs.push_back(new Player);
	objs.push_back(new Enemy);
	do
	{
		for (size_t i = 0; i < objs.size(); ++i)
		{
			objs[i]->update();
		}
		for (size_t i = 0; i < objs.size(); ++i)
		{
			objs[i]->rander();
		}
	} while (false);
	for(size_t i = 0;i < objs.size();++i)
	{
		delete objs[i];
	}
	system("pause");
	return 0;
}