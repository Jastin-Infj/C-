#include <iostream>
using namespace std;
float InputFloatValue()
{
	float input;
	for (cin >> input; !cin; cin >> input)
	{
		cin.ignore();
		cin.clear();
	}
	return input;
}
int main()
{
	float input;
	cout << "小数の値を入力 :";

	input = InputFloatValue();

	cout << "入力された値は" << input;
	system("pause");
}
