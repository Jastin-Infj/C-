#include <iostream>
using namespace std;
class Sample
{
public:
	static void type() { cout << "Sample" << endl; }
};
int main()
{
	Sample::type();	//éŒ¾‚µ‚È‚­‚Ä‚àƒƒ\ƒbƒh‚ðŒÄ‚×‚é
	system("pause");
	return 0;
}