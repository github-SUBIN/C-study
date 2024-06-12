#include <iostream>
using namespace std;

class Rectangle
{
private:
	int height;
	int width;

public:
	Rectangle()
	{
		height = 0;
		width = 0;
	}
	Rectangle(int h, int w)
	{
		height = h;
		width = w;
	}

	int getHeight()
	{
		return height;
	}
	int getWidth()
	{
		return width;
	}
	void setHeight(int h)
	{
		height = h;
	}
	void setWidth(int w)
	{
		width = w;
	}

	double calcArea()
	{
		return height * width;
	}

	void print()
	{
		cout << "가로 : " << width << " 세로 : " << height << " 넓이 : " << calcArea() << endl;
	}
};

int main()
{
	Rectangle rect1;
	rect1.print();

	Rectangle rect2(10, 20);
	rect2.print();

	Rectangle rect3(300, 200);
	rect3.print();
	rect3.setWidth(20);
	rect3.getHeight();
	rect3.print();
}