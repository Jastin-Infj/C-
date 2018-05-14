#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Chara
{
	string name;
	int eigo, suugaku;
};
bool Pred(vector<Chara>::iterator& it)
{
	return (*it).suugaku + (*it).eigo < 18 ? true : false;
}
int main()
{
	vector<Chara> ch =
	{
	{ "koyanagi",6,8 },
	{ "matusiyama",10,8 },
	{ "ookubo",9,9 },
	{ "saigusa",8,10 },
	{ "ueyama",7,7 },
	};
	for (vector<Chara>::iterator it = ch.begin();it != ch.end();)
	{
		if (Pred(it))
		{
			it = ch.erase(it);
		}
		else
		{
			++it;
		}
	}
	for (const auto& c : ch)
	{
		cout << c.name << endl;
	}
	system("pause");
}