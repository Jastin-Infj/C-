#include <iostream>
#include <functional>

class Object
{
	int v;
	Object() {}
public:
	~Object() {}
	Object(int v) :v(v) {}
	void output() { std::cout << this->v << std::endl; }
	void output3(int a, int b, int c) { std::cout << this->v << a << b << c << std::endl; }
};
int main()
{
	Object o(30);
	Object o2(120);
	
	//クラスメソッドの登録ができる
	std::function<void(void)> f1 = std::bind(&Object::output, o);
	std::function<void(int, int, int)> f3 = std::bind(&Object::output3, o, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);

	//o.output()
	f1();
	//o2.output()
	f1 = std::bind(&Object::output, o2);
	//o2.output()
	f1();
	//o.output3()
	f3(1, 2, 3);
	system("pause");
}