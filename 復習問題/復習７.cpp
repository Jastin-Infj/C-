#include <iostream>
using namespace std;
int main()
{
	for (int y = 1; y <= 7; ++y)
	{
		for (int x = 0; x < y; ++x)
		{
			cout << y;
		}
		cout << endl;
	}
	system("pause");
}