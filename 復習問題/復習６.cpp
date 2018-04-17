#include <iostream>
using namespace std;

struct Vec2
{
	float posx;
	float posy;
};

struct Monster
{
	int id;
	Vec2 pos;
};

void Input(Monster*);
void output(Monster*);

int main()
{
	Monster monster[3];
	Input(monster);
	system("pause");
	return 0;
}


void Input(Monster* t_)
{
	for (int i = 0; i < 3; ++i)
	{
		for (cin >> t_[i].id; !cin; cin >> t_[i].id)
		{
			cout << "®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢";
			cin.clear();
			cin.ignore();
		}
	}
}
void output(Monster* t_)
{

}