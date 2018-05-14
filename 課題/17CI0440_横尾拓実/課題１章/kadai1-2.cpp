#include <iostream>
using namespace std;
struct Vec3
{
	float x, y, z;
};
Vec3& operator+=(Vec3& a, float b)
{
	//Vec3& r = a;//Ç±ÇÍÇ≈ê¨å˜ÇµÇΩÇ∆Ç¢Ç§Ç±Ç∆ÇÕÅ@rÇÕÇ¢ÇÁÇ»Ç¢
	a.x = a.x + b;
	a.y = a.y + b;
	a.z = a.z + b;
	return a;
}
Vec3& operator-=(Vec3& a, float b)
{	
	a.x = a.x - b;
	a.y = a.y - b;
	a.z = a.z - b;
	return a;
}
Vec3& operator*=(Vec3& a, float b)
{
	a.x = a.x * b;
	a.y = a.y * b;
	a.z = a.z * b;
	return a;
}
int main()
{
	Vec3 scale = { 0.4f , 1.5f , 0.5f };
	scale *= 2.0f;
	cout << scale.x << "   " <<scale.y << "   " << scale.z << endl;
	system("pause");
}