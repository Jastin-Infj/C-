#include <iostream>
using namespace std;
class Sample
{
public:
	Sample() { cout << "create" << endl; }
	~Sample() { cout << "delete" << endl; }
};
int main()
{
	Sample* s = new Sample[2];
	cout << "���e" << endl;
	delete[] s;
	system("pause");
	return 0;
}