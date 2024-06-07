#include <iostream>
using namespace std;

class Rectangle
{
public:
	int width;
	int height;

	Rectangle();
	Rectangle(int w);
	Rectangle(int w, int h)
	{
		width = w;
		height = h;
	}

	double isSquare();
};

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle(int w)
{
	width = w;
	height = w;
}

double Rectangle::isSquare()
{
	if (width == height)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main() 
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);
	if (rect1.isSquare())
	{
		cout << "rect1�� ���簢���̴�.\n";
	}
	if (rect2.isSquare())
	{
		cout << "rect2�� ���簢���̴�. \n";
	}
	if (rect3.isSquare())
	{
		cout << "rect3�� ���簢���̴�. \n";
	}
}
