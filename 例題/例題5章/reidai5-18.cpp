#include <iostream>
#include <memory>
#include <vector>
using namespace std;


class Object
{
public:
	Object() { cout << "A" << endl; }
	~Object() { cout << "B" << endl; }
	shared_ptr<Object> p;
};
typedef shared_ptr<Object> ObjectPtr;

int main()
{
	vector<ObjectPtr> objs;
	for (int i = 0; i < 2; ++i)
	{
		ObjectPtr obj(new Object());
		objs.push_back(obj);
	}

	//|------------------------------------------------------------------------------------------------------------------------|//
	//|���݂��̃|�C���^���������Ă���̂ŁA�X�}�[�g�|�C���^���g�p���Ă��������Ȃ��ꍇ������A�z�Q�Ƃ������N���������ƂȂ�|//
	//|���̏ꍇ�̓E�B�[�N�|�C���^���g�p����                                                                                    |//
	//|________________________________________________________________________________________________________________________|//

	objs[0]->p = objs[1];///���݂��̃|�C���^�������Ă����ԂȂ̂ŁA�t���[�ɂȂ�Ȃ�
	objs[1]->p = objs[0];
	cout << "===clear()�Ăяo���O==" << endl;
	objs.clear();
	cout << "===clear()�Ăяo����==" << endl;
	system("pause");
	return 0;
}