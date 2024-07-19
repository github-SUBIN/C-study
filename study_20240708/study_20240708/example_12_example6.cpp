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

	Point& operator ++()
	{
		++x;
		++y;
		return *this;
	}

	Point operator ++(int)
	{
		Point tmp = *this;
		x++;
		y++;
		return tmp;
	}

	void print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

int main()
{
	Point p1(3, 4);
	Point p2 = p1++;

	p1.print();
	p2.print();
}