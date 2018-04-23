#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char str[100];
	scanf("%101s", str);
	int Count = 0;
	int z = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		str[i] = str[i];
		Count++;
		if (str[i] == 'z')
		{
			z++;
		}
	}
	cout << Count << endl;
	cout << z << endl;
	system("pause");
}