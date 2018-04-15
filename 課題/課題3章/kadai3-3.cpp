#include <iostream>
using namespace std;
class Object
{
	static int uid_;
	int id_;
public:
	static int uid() { return uid_; }
	int id() { return id_; }
};
int Object::uid_;
int main()
{
	Object a, b, c;
	cout << "生成したオブジェクト数" << Object::uid();
	cout << a.id() << b.id() << c.id() << endl;
	system("pause");
	return 0;
}