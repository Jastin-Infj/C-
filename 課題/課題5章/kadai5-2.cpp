#include <iostream>
#include <vector>
#include <memory>

class Hoge
{
public:
	typedef std::shared_ptr<Hoge> SP;
	Hoge();
	~Hoge();
	static Hoge::SP Create();
	void update();
};
Hoge::Hoge()
{
	std::cout << "constractor  ";
}
Hoge::~Hoge()
{
	std::cout << "destractor  ";
}
void Hoge::update()
{
	std::cout << "update  ";
}
Hoge::SP Hoge::Create()
{
	Hoge::SP to = Hoge::SP(new Hoge());
	if (to)
	{
		return to;
	}
	return nullptr;
}
int main()
{
	std::vector<std::shared_ptr<Hoge>> objects;

	for (int i = 0; i < 4; ++i)
	{
		objects.push_back(Hoge::Create());
	}
	std::cout << "\n============================";
	std::cout << std::endl;
	for (auto id = objects.begin(); id != objects.end(); ++id)
	{
		(*id)->update();
	}
	std::cout << "\n============================";
	std::cout << std::endl;
	objects.clear();
	system("pause");
	return 0;
}
