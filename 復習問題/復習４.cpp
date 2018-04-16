#include <iostream>
using namespace std;
int main()
{
	const int n = 5;
	int value[5] = { 1,2,3,4,5 };

	for (int i = 0; i < n / 2 ; ++i)
	{
		int temp = value[i];
		value[i] = value[(5 - 1) - i];
		value[(5 - 1) - i] = temp;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << value[i] << "  ";
	}
	system("pause");
	return 0;
}