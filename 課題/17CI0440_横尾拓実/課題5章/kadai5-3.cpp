#include <iostream>
#include <vector>
#include <memory>
#include <string>

class Hoge
{
	std::string name_;
public:
	typedef std::shared_ptr<Hoge> SP;
	typedef std::weak_ptr<Hoge>   WP;
	void update();
	~Hoge();
	Hoge(const std::string& n);
};
Hoge::Hoge(const std::string& n) : name_(n)
{
	std::cout << name_ << "constractor" << std::endl;
}
Hoge::~Hoge()
{
	std::cout << "destractor";
}
void Hoge::update()
{
	std::cout << this->name_ << "update" << std::endl;
}
class Factory
{
public:
	typedef std::shared_ptr<Factory> SP;
	typedef std::weak_ptr<Factory>   WP;

	std::vector<Hoge::SP> objects;
	virtual Hoge::SP factorymethod(const std::string& type) = 0;
	Hoge::WP create(const std::string& type);

	~Factory();
	Factory();
};
Factory::Factory()
{
	std::cout << "factory constractor" << std::endl;
}
Factory::~Factory()
{
	std::cout << "factory destractor" << std::endl;
}
Hoge::SP Factory::factorymethod(const std::string& type)
{
	Hoge::SP to = Hoge::SP(new Hoge(type));
	if (to)
	{
		return to;
	}
	return nullptr;
}
Hoge::WP Factory::create(const std::string& type)
{
	Hoge::SP p = this->factorymethod(type);
	objects.push_back(p);
	return p;
}
class HogeGenarator : public Factory
{
	
};
int main()
{
	auto factory = std::make_unique<HogeGenarator>();
	std::vector<Hoge::WP> objects;
	objects.push_back(factory->create("goblin"));
	objects.push_back(factory->create("oak"));
	for (auto& object : objects)
	{
		auto p = object.lock();
		p->update();
	}
	objects.clear();
	system("pause");
}

