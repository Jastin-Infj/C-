#include "Šî”ÕƒNƒ‰ƒX.h"
using namespace std;
Object::Object()
{
	cout << "Object ¶¬" << endl;
}
Object::~Object()
{
	cout << "Object ‰ğ•ú" << endl;
	Finalize();
}
bool Object::Initialize()
{
	cout << "Object@‰Šú‰»" << endl;
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