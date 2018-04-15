#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int value = -1;
	int total = 0;
	int Count = -1;//0の件数を取得する分あらかじめ減らしておく
	while (value != 0)
	{
		for (cin >> value; !cin; cin >> value)
		{
			cin.clear();
			cin.ignore();
		}
		v.push_back(value);
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		Count++;
		total += *it;
	}
	cout << "総件数：" << Count << endl;
	cout << "合計点：" << total << endl;
	cout << "平均点: " << (float)total / Count;
	system("pause");
}