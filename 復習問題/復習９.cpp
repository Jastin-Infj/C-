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
	cout << "¬”‚Ì’l‚ğ“ü—Í :";

	input = InputFloatValue();

	cout << "“ü—Í‚³‚ê‚½’l‚Í" << input;
	system("pause");
}
