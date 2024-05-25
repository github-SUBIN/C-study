#include <iostream>
using namespace std;

class Rectangle
{
public:
	int a;
	int b;

	int getArea();
};

int Rectangle::getArea()
{
	return a * b;
}

int main()
{
	Rectangle n1;

	n1.a = 3;
	n1.b = 4;
	int area = n1.getArea();

	cout << area;
}