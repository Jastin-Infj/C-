#include <iostream>
using namespace std;
struct Vec3
{
	float x, y, z;
};
Vec3 operator+(const Vec3& a, const Vec3& b)
{
	Vec3 r;
	r.x = a.x + b.x;
	r.y = a.y + b.y;
	r.z = a.z + b.z;
	return r;
}
Vec3 operator-(const Vec3& a, const Vec3& b)
{
	Vec3 r;
	r.x = a.x - b.x;
	r.y = a.y - b.y;
	r.z = a.z - b.z;
	return r;
}
Vec3 operator*(const Vec3& a, const Vec3& b)
{
	Vec3 r;
	r.x = a.x * b.x;
	r.y = a.y * b.y;
	r.z = a.z * b.z;
	return r;
}
int main()
{
	Vec3 a = { 4.0f , 2.0f, 1.0f };
	Vec3 b = { 1.0f , 5.0f, 3.0f };
	Vec3 c;
	c = a + b;
	cout << c.x << "  " << c.y << "  " << c.z << endl;
	c = a - b;
	cout << c.x << "  " << c.y << "  " << c.z << endl;
	c = a * b;
	cout << c.x << "  " << c.y << "  " << c.z << endl;
	system("pause");
}