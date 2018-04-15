#include <iostream>
using namespace std;
class Integer
{
	int value_;
public:
	Integer(int value) : value_(value) {}				//�R���X�g���N�^�t��
	void output() const { cout << value_ << endl; }	    //const ��{}�ł̒l�̕ύX�͂ł��Ȃ��ƕۏ؂��Ă���
	int operator()()const { return value_; }			//�H�H�H
	void operator=(int value) { value_ = value; }
	Integer& operator+=(int value) { value_ += value; return *this; }
	friend void operator>>(int value, Integer& obj);
};
void operator>>(int value, Integer& obj)
{
	obj.value_ = value;									//private���ĂԂ��Ƃ��\�ɂȂ�
}
int main()
{
	Integer obj(0);
	obj = 200;					//value_ = 200
	obj.output();
	obj += 10;					//value_ += 10
	cout << obj() << endl;		//value_��Ԃ�
	system("pause");
	return 0;
}