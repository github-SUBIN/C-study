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

	/*
	Point operator ++()
	{
		Point temp;
		temp.x = ++x;
		temp.y = ++y;
		//++x;
		//++y;
		//return *this;
		return temp;
	}
	*/

	void print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

int main()
{
	Point pt1(3, 4);

	pt1.print();

	++pt1;
	pt1.print();

	++(++pt1);
	pt1.print();

	++pt1;
	pt1.print();

	++(++pt1);
	pt1.print();

	++(++(++pt1));
	pt1.print();

}