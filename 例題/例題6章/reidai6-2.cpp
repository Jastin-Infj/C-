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
	cout << "面積は" << area << endl;
	system("pause");
}
//|=============================|//
//|マイナスの場合に例外が発生する  |//
//|=============================|//