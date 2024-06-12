#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:

	Point()
	{
		x = 0;
		y = 0;
	}

	Point(int a, int b)
	{
		x = a;
		y = b;
	}

	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setX(int xx)
	{
		x = xx;
	}
	void setY(int yy)
	{
		y = yy;
	}

	void print()
	{
		cout << "( " << x << " , " << y << " )" << endl;
	}

	void move(int dx, int dy)
	{
		x = x + dx;
		y = y + dy;
	}

	double dist(Point p)
	{
		int dx = x - p.getX();
		int dy = y - p.getY();
		return sqrt(dx * dx + dy * dy);
	}
};

int main()
{
	Point p1(3, 4);
	Point p2(0, 0);

	cout << "P1 : ";
	p1.print();

	cout << "P2 : ";
	p2.print();

	cout << "Distance P1 to P2 : " << p1.dist(p2) << endl;
	cout << "Distance P2 to P1 : " << p2.dist(p1) << endl;

	p1.move(1, 2);

	cout << "Moved P1 : ";
	p1.print();

	cout << "Distance P1 to P2 : " << p1.dist(p2) << endl;
	cout << "Distance P1 to P1 : " << p1.dist(p1) << endl;
}