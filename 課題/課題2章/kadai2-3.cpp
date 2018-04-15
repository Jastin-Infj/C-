#include <iostream>
#include <fstream>	//ostream
#include <iomanip>	//setprecision
using namespace std;

class Length
{
public:
	float cm();
	float km();
	Length(float value);
	float m();
	float mm();
private:
	float mm_;
};
float Length::mm()
{
	return mm_;
}
float Length::cm()
{
	return mm_;
}
float Length::m()
{
	return mm_;
}
float Length::km()
{
	return mm_;
}
Length::Length(float value)
{
	mm_ = value;
}

ofstream& format(ofstream& o)
{
	o << fixed << setprecision(2);
	return o;
}
int main()
{
	float input;
	cout << "’·‚³‚ðƒ~ƒŠƒ[ƒgƒ‹‚Å“ü—Í:";
	cin >> input;
	Length distance(input);
	cout << format << distance.mm() << "mm...‚Í" << endl;
	cout << format << distance.cm() << "cm" << endl;
	cout << format << distance.m() << "m" << endl;
	cout << format << distance.km() << "km" << endl;
	system("pause");
	return 0;
}