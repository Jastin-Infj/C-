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

//enum�^�Ɗ֐��̊֘A�������܂�ɂ��ǂ��Ȃ�
//������ƌ����Ċ֐��|�C���^�ł���Ă����l�����ł͓ǂ݂ɂ���
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