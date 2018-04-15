#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Object
{
public:
	Object() { cout << "A" << endl; }
	~Object() { cout << "B" << endl; }
};
int main()
{
	vector<Object*>a;

	a.push_back(new Object());
	a.push_back(new Object());
	cout << "==clear()呼び出し前===" << endl;
	a.clear();
	cout << "==clear()呼び出し後" << endl;
	system("pause");
	//デストラクタが呼ばれない
}