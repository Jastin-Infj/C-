#include <iostream>
using namespace  std;
int main()
{
	for (int n = 0; n < 4; ++n)
	{
		for (int i = 0; i < 10; ++i)
		{
			switch (n)
			{
			case 0:
				cout << i << " ";
				break;
			case 1:
				cout << i * 3 << " ";
				break;
			case 2:
				cout << i * 2 + 1 << " ";
				break;
			case 3:
				if (i % 4 != 0)
				{
					cout << "œ" << "  ";
				}
				else
				{
					cout << "›" << "   ";
				}
				break;
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}