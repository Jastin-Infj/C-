#include <iostream>
void CreateEnemyA(float x, float y)
{

}
void CreateEnemyB(float x, float y)
{

}
enum
{
	TYPE_ENEMY_A,TYPE_ENEMY_B
};

//enum型と関数の関連性があまりにも良くない
//だからと言って関数ポインタでやっても数値だけでは読みにくい
int main()
{
	int enemytype = 0;
	switch (enemytype)
	{
	case TYPE_ENEMY_A:
		CreateEnemyA(100,100);
		break;
	case TYPE_ENEMY_B:
		CreateEnemyB(100, 100);
		break;
	default:
		break;
	}
}