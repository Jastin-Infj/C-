#include <iostream>
using namespace std;
int main()
{
	int value[5];

	for (int i = 0; i < 5; ++i)
	{
		cout << "配列の中身を入力 : ";
		for (cin >> value[i];  !cin; cin >> value[i])
		{
			cout << "入力が正しくありません" << endl;
			cin.clear();//エラーの状態を解除する
			cin.ignore();//文字列消去
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << *(value + i);
		//cout << value[i];
	}

	system("pause");
	return 0;
}