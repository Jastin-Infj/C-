#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int value = -1;
	int total = 0;
	int Count = -1;//0�̌������擾���镪���炩���ߌ��炵�Ă���
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
	cout << "�������F" << Count << endl;
	cout << "���v�_�F" << total << endl;
	cout << "���ϓ_: " << (float)total / Count;
	system("pause");
}