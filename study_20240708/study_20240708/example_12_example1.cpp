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

	Point operator +(Point pt)
	{
		Point temp;
		temp.x = x + pt.x;
		temp.y = y + pt.y;
		return temp;
	}
};

int main()
{
	Point pt1(3, 5);
	Point pt2 = Point(4, 6);
	Point pt3;

	cout << pt3.getX() << ", " << pt3.getY() << endl;

	pt3 = pt1 + pt2;
	cout << pt3.getX() << ", " << pt3.getY() << endl;
}