#include <iostream>
using namespace std;
int main()
{
	int value[5];

	for (int i = 0; i < 5; ++i)
	{
		cout << "�z��̒��g����� : ";
		for (cin >> value[i];  !cin; cin >> value[i])
		{
			cout << "���͂�����������܂���" << endl;
			cin.clear();//�G���[�̏�Ԃ���������
			cin.ignore();//���������
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