#include "B.h"
using namespace std;
B::B(A* pointa)
{
	pointa_ = pointa;
}
void B::foo()
{
	cout << "B_foo" << endl;
}
void B::bar()
{
	cout << "B_bar" << endl;
}
