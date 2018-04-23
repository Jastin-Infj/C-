#include <iostream>
using namespace std;
class User
{
public:
	void Score_Input();
	void Output();
private:
	int score;
};
void User::Score_Input()
{
	int value = 0;
	while (true)
	{
		for (cin >> value; !cin; cin >> value)
		{
			cin.ignore();
			cin.clear();
		}
		if (value >= 0 && value <= 100)
		{
			break;
		}
	}
	score = value;
}
void User::Output()
{
	if (score >= 50 && score <= 100)
	{
		cout << "クリア" << endl;
	}
	else if (score >= 0 && score <= 49)
	{
		cout << "ミス！" << endl;
	}
}
int main()
{
	User user;
	user.Score_Input();
	user.Output();
	system("pause");
}