#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle()
	{
		radius = 1;
		cout << "������ ���� radius = " << radius << endl;
	}
	Circle(int r)
	{
		radius = r;
		cout << "������ ���� radius = " << radius << endl;
	}
	~Circle()
	{
		cout << "�Ҹ��� ���� radius = " << radius << endl;
	}

	void setRadius(int r)
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

}