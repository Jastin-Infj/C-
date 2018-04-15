#include <iostream>
using namespace std;
class Integer
{
	int value_;
public:
	Integer(int value) : value_(value) {}				//コンストラクタ付き
	void output() const { cout << value_ << endl; }	    //const で{}での値の変更はできないと保証している
	int operator()()const { return value_; }			//？？？
	void operator=(int value) { value_ = value; }
	Integer& operator+=(int value) { value_ += value; return *this; }
	friend void operator>>(int value, Integer& obj);
};
void operator>>(int value, Integer& obj)
{
	obj.value_ = value;									//privateを呼ぶことが可能になる
}
int main()
{
	Integer obj(0);
	obj = 200;					//value_ = 200
	obj.output();
	obj += 10;					//value_ += 10
	cout << obj() << endl;		//value_を返す
	system("pause");
	return 0;
}