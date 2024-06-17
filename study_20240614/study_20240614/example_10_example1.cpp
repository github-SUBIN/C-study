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
	int r = 0;
	while (r >= 0)
	{
		cout << "���� �������� �Է��Ͻÿ�(������ �Է��ϸ� ����˴ϴ�.) : ";
		cin >> r;
		if (r < 0)
		{
			return 0;
		}
		else
		{
			Circle* circle = new Circle(r);
			cout << "���� ���̴� : " << circle->getArea() << "�Դϴ�." << endl;
			delete circle;
		}
	}
}