#include <iostream>
using namespace std;

class Shape
{
protected:
	double x, y;
public:
	virtual double area() = 0;
};

class Rectangle :public Shape
{
private:
	double height, width;
public:
	Rectangle(double h, double w)
	{
		height = h;
		width = w;
	}
	double area()
	{
		return (width * height);
	}
};

int main()
{
	Rectangle r(10, 20);
	cout<<r.area();

}