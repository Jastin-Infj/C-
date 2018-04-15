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
	friend void operator<<(int value, Integer& obj);
};
void operator<<(int value, Integer& obj)
{
	obj.value_ = value;
}