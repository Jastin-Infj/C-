#include <iostream>
using namespace std;
int CalcArea(int w, int h) 
{
	return w * h;
}
int main()
{
	int w, h;
	cin >> w >> h;
	auto area = CalcArea(w, h);
	cout << "�ʐς�" << area << endl;
	system("pause");
}
//|=============================|//
//|�}�C�i�X�̏ꍇ�ɗ�O����������  |//
//|=============================|//