#include <iostream>
#include <memory>
using namespace std;
class Sample
{
	Sample* target_;		//狙っている相手へのポインタ
public:
	void setTarget(Sample* target) { target_ = target; }
};
void output()
{
	Sample* player = new Sample;
	Sample* enemy = new Sample;

	//|-------------------------------------------------------------------|//
	//|何らかの処理で、enemyが消えてしまった                              |//
	//|例　画面外に出てしまった、他のプレイヤが敵をやっつけてしまったなど |//
	//|___________________________________________________________________|//

	player->setTarget(enemy);
	delete enemy;

	///playerがtarget_を参照すると・・・エラーになってしまう
	///複数　VS　複数の処理を問題に発展する可能性があり
	
}
int main()
{
	output();
	system("pause");
	return 0;
}