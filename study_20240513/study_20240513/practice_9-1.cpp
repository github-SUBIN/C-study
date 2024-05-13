#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	string color;

	double getArea();
};

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	double a;
	Circle obj;

	obj.radius = 10;
	obj.color = "blue";
	a = obj.getArea();

	cout << a << endl;
}