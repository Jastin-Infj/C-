#include "基盤クラス.h"
using namespace std;
Object::Object()
{
	cout << "Object 生成" << endl;
}
Object::~Object()
{
	cout << "Object 解放" << endl;
	Finalize();
}
bool Object::Initialize()
{
	cout << "Object　初期化" << endl;
	return true;
}
void Object::Draw()
{
	Render2D();
}
void Object::T_UpDate()
{
	UpDate();
}
void Object::Delete()
{
	Finalize();
}