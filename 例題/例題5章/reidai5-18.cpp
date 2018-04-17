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
	//|お互いのポインタ情報を持っているので、スマートポインタを使用しても解放されない場合があり、循環参照を引き起こす原因となる|//
	//|この場合はウィークポインタを使用する                                                                                    |//
	//|________________________________________________________________________________________________________________________|//

	objs[0]->p = objs[1];///お互いのポインタを持っている状態なので、フリーにならない
	objs[1]->p = objs[0];
	cout << "===clear()呼び出し前==" << endl;
	objs.clear();
	cout << "===clear()呼び出し後==" << endl;
	system("pause");
	return 0;
}