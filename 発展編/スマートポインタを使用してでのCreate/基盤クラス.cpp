#include "��ՃN���X.h"
using namespace std;
Object::Object()
{
	cout << "Object ����" << endl;
}
Object::~Object()
{
	cout << "Object ���" << endl;
	Finalize();
}
bool Object::Initialize()
{
	cout << "Object�@������" << endl;
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