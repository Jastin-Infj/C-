#include <iostream>
using namespace std;
int main()
{
	auto plus_ = [](int a, int b) {return a + b; };
	int result = plus_(2, 3);
	cout << result << endl;
	system("pause");
}
