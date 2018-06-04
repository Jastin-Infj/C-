#include <iostream>
#include <vector>
#include <math.h>
#define PI 3.14159265f

using namespace std;

class Shape
{
public:
	virtual void outputArsa() = 0;
	virtual ~Shape()
	{
		cout << "destractor" << "  ";
	}
};


class Rectangle : public Shape
{
public:
	Rectangle(int, int);
	void outputArsa();
private:
	float total;
};
Rectangle::Rectangle(int a, int b)
{
	total =  (float)a * (float)b;
}
void Rectangle::outputArsa()
{
	cout << total << "    ";
}

class Triangle : public Shape
{
public:
	Triangle(int, int);
	void outputArsa();
private:
	float total;
};
Triangle::Triangle(int a,int b)
{
	total = ((float)a * (float)b) / 2;
}
void Triangle::outputArsa()
{
	cout << total << "    ";
}


class Ellipase : public Shape
{
public:
	Ellipase(int, int);
	void outputArsa();
private:
	float total;
};
Ellipase::Ellipase(int a,int b)
{
	total = (float)a * b * PI;
}
void Ellipase::outputArsa()
{
	cout << total << "    ";
}


class Circle : public Shape
{
public:
	Circle(int);
	void outputArsa();
private:
	float total;
};
Circle::Circle(int r)
{
	total = (float)r * r * PI;
}
void Circle::outputArsa()
{
	cout << total << "   ";
}

int main()
{
	vector<Shape*> shapes;
	shapes.push_back(new Rectangle(10, 20));
	shapes.push_back(new Triangle(10, 20));
	shapes.push_back(new Ellipase(10, 20));
	shapes.push_back(new Circle(10));
	for (const auto& shape : shapes)
	{
		shape->outputArsa();
	}
	cout << endl;
	for (auto& shape : shapes)
	{
		delete shape;
	}
	system("pause");
	return 0;
}