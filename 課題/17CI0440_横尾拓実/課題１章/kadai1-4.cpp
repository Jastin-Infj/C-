#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool Pred(vector<int>::iterator& value)
{
	return *value % 2 == 0 ? true : false;
}
int main()
{
	vector<int> v = { 1,3,5,7,9,2,4,6,8,0 };
	for (auto it = v.begin(); it != v.end();)
	{
		if (Pred(it))
		{
			it = v.erase(it);
		}
		else
		{
			++it;
		}
	}
	for (auto it = v.begin(); it != v.end();++it)
	{
		cout << *it << endl;
	}
	system("pause");
}
