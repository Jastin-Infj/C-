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
	cout << "�����̒l����� :";

	input = InputFloatValue();

	cout << "���͂��ꂽ�l��" << input;
	system("pause");
}
