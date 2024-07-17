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

	/*
	//³»°¡ Â§°Å
	bool operator==(Point pt)
	{
		if (x == pt.x)
		{
			if (y == pt.y)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	*/

	bool operator==(Point pt)
	{
		return (x == pt.x && y == pt.y);
	}
};

int main()
{
	Point pt1(3, 5);
	Point pt2(4, 6);
	Point pt3(3, 5);

	cout << (pt1 == pt2) << endl;
	cout << (pt1 == pt3) << endl;

}