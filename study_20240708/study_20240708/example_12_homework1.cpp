#include <iostream>
using namespace std;

class Box
{
	double length;
	double width;
	double height;

public:
	Box(int l = 0, int w = 0, int h = 0)
	{
		length = l;
		width = w;
		height = h;
	}
	double getVolume()
	{
		return length * width * height;
	 }
	void print()
	{
		cout << "상자의 길이 : " << length << endl;
		cout << "상자의 너비 : " << width << endl;
		cout << "상자의 높이 : " << height << endl;
		cout << "상자의 부피 : " << getVolume() << endl;
	}


	Box operator +(Box b)
	{
		Box newBox;

		newBox.length = length + b.length;
		newBox.width = width + b.width;
		newBox.height = height + b.height;

		return newBox;
	}

	bool operator==(Box b)
	{
		return (length == b.length && width == b.width && height == b.height);
	}

	bool operator>(Box b)
	{
		return (getVolume() > b.getVolume());
	}

	bool operator<(Box b)
	{
		return (getVolume() < b.getVolume());
	}

};

int main()
{
	Box a(10, 5, 9), b(7, 10, 12), c;
	c = a + b;
	a.print();
	cout << "----------------------" << endl;
	b.print();
	cout << "----------------------" << endl;
	c.print();
	cout << "----------------------" << endl;

	cout << boolalpha << (a == b) << endl;
	cout << boolalpha << (a < b) << endl;
	cout << boolalpha << (a > b) << endl;

}