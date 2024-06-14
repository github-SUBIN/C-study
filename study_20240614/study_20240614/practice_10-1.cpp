#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle()
	{
		radius = 1;
	}
	Circle(int r)
	{
		radius = r;
	}
	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle donut; //디폴트 생성자라서 반지름 1
	Circle pizza(30); //변수 하나인 생성자 반지름 30

	cout << donut.getArea() << endl;

	Circle* p;
	p = &donut;

	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;

	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
}