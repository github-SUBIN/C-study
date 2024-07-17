#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:
	Point(int i = 0, int j = 0)
	{
		x = i;
		y = j;
	}

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}

	void print()
	{
		cout << "( " << x << ", " << y << " )" << endl;
	}

	Point operator+(Point pt)
	{
		Point temp;
		temp.x = x + pt.x;
		temp.y = y + pt.y;
		return temp;
	}

	Point operator-(Point pt)
	{
		Point temp;
		temp.x = x - pt.x;
		temp.y = y - pt.y;
		return temp;
	}

	Point operator+(int a)
	{
		Point temp;
		temp.x = x + a;
		temp.y = y + a;
		return temp;
	}

	Point operator-(int n)
	{
		Point temp;
		temp.x = x - n;
		temp.y = y - n;
		return temp;
	}
};

int main()
{
	Point pt1(3, 5);
	Point pt2 = Point(4, 6);
	Point pt3;

	pt3 = pt1 + 4;
	pt3.print();

	pt3 = pt1 - 4;
	pt3.print();
}