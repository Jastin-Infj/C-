#include <iostream>
using namespace std;
class Sample
{
public:
	static void type() { cout << "Sample" << endl; }
};
int main()
{
	Sample::type();	//�錾���Ȃ��Ă����\�b�h���Ăׂ�
	system("pause");
	return 0;
}