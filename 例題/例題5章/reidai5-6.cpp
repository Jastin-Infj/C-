#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Object
{
public:
	Object() { cout << "A" << endl; }
	~Object() { cout << "B" << endl; }
};
int main()
{
	vector<Object*>a;

	a.push_back(new Object());
	a.push_back(new Object());
	cout << "==clear()�Ăяo���O===" << endl;
	a.clear();
	cout << "==clear()�Ăяo����" << endl;
	system("pause");
	//�f�X�g���N�^���Ă΂�Ȃ�
}