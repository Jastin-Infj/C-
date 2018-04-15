#include <iostream>
#include <vector>
#include <array>
using namespace std;
class Object
{
	int value;
};
class Sample : public Object
{
	int x;
public:
	void output()
	{
		cout << "Sample" << endl;
	}
};
class Sample1 : public Object
{
	int y;
public:
	void output()
	{
		cout << "Sample1" << endl;
	}
};
class Sample2 : public Object
{
	int z;
public:
	void output()
	{
		cout << "Sample2" << endl;
	}
};
class Object;
class Sample_Maneger
{
	//–{“–‚Í‚±‚¤‚µ‚½‚¢
public:
	Sample* s_pointa;
	Sample1* s1_pointa;
	Sample2* s2_pointa;
	vector<Object*> pointa;
};
void UpDate()
{
	int value = 0;
	while (value == 0)
	{
		cout << "’l‚Ì“ü—Í‚ð‚µ‚Ä‚­‚¾‚³‚¢ ";
		cin >> value;
		if (value == 1)
		{
			break;
		}
	}
}
void(*Func)();
void Initalize()
{
	Func = UpDate;
}
int main()
{
	Func = Initalize;
	Func();
	auto g = new Sample_Maneger();
	//ŽÀs‚Å‚«‚½
	g->pointa.push_back(new Sample);
	g->pointa.push_back(new Sample1);
	g->pointa.push_back(new Sample2);
	Func = UpDate;
	Func();
	g->s1_pointa->output();
	g->s2_pointa->output();
	g->s_pointa->output();
	delete g->s1_pointa;
	delete g->s2_pointa;
	delete g->s_pointa;
	delete g->pointa;
	system("pause");
}