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

/*
//이렇게 함수 작성 가능
#include <iostream>
using namespace std;

class Circle
{
public:
	int r;

	double getArea()
	{
		return r * r * 3.14;
	}
};

int main()
{
	Circle a;
	a.r = 10;
	double b = a.getArea();

	cout << b;
}
*/