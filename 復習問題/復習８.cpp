#include <iostream>
using namespace std;
int main()
{
	char input = 'b';
	while (1)
	{
		for (cin >> input; !cin; cin >> input)
		{
			cin.ignore();
			cin.clear();
		}
		if (input == 'a')
		{
			break;
		}
	}
	system("pause");
}