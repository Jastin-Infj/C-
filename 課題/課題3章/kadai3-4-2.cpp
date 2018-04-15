#include <iostream>
using namespace std;
class Integer
{
	int value_;
public:
	Integer(int value) : value_(value) {}
	void output() const { cout << value_ << endl; }
	Integer& operator+=(int value)
	{
		value_ += value;
		return *this;
	}
	friend class Integer_ope;
};
class Integer_ope
{
	void operator<<(Integer& obj , int value);
};
void Integer_ope::operator<<(Integer& obj , int value)
{
	//ˆø”‚Í‚Ç‚¤‚â‚çˆê‚Â‚µ‚©“ü‚ç‚ê‚È‚¢‚ç‚µ‚¢
	obj.value_;
}
int main()
{
	Integer obj(0);
	obj << 100;				//
	obj += 10;
	obj.output();
	system("pause");
}