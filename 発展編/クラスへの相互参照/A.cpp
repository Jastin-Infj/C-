
#include "A.h"
using namespace std;
A::A()
{
	B_pointa = new B(this);
}
void A::foo()
{
	cout << "A_foo" << endl;
}
void A::bar()
{
	cout << "A_bar" << endl;
	B_pointa->foo();
}