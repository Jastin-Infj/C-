#include <iostream>
#include <vector>
using namespace std;
class GameObject
{
public:
	virtual void update() { cout << "���t���[���Ă΂�鏈��" << endl; }		//�p����ŏ������㏑���ł��邱�Ƃ������i�I�[�o�[���C�h�j
	virtual void rander() { cout << "�`�揈��" << endl; }
};
class Player : public GameObject
{
public:
	void update() {cout << "�v���C���ŗL��update" << endl;}					//GameObject::update()���ĂԂ��Ƃ��\
};
class Enemy : public GameObject
{
	void rander() { cout << "�G�l�~�[�ŗL�̕`�揈��" << endl; }
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