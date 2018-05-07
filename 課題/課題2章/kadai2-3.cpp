#include <iostream>
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
Length::Length(float value)
{
	mm_ = value;
}
float Length::mm()
{
	return mm_;
}
float Length::cm()
{
	return mm_ / 10;
}
float Length::m()
{
	return mm_ / 10 / 100;
}
float Length::km()
{
	return mm_/10 / 100 /1000;
}


//�}�j�s�����[�^�̎g�p
ostream& format(ostream& o)
{
	o << fixed << setprecision(2);
	return o;
}
int main()
{
	float input;
	cout << "�������~�����[�g���œ���:";
	cin >> input;
	Length distance(input);
	
	cout << format << distance.mm() << "mm...��" << endl;
	cout << format << distance.cm() << "cm" << endl;
	cout << format << distance.m()  << "m" << endl;
	cout << format << distance.km() << "km" << endl;
	system("pause");
	return 0;
}