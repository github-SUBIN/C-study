#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle()
	{
		radius = 1;
		//cout << "������ ���� radius = " << radius << endl;
	}
	Circle(int r)
	{
		radius = r;
		//cout << "������ ���� radius = " << radius << endl;
	}
	~Circle()
	{
		//cout << "�Ҹ��� ���� radius = " << radius << endl;
	}

	double getArea()
	{
		return 3.14 * radius * radius;
	}

	void setRadius(int r)
	{
		radius = r;
	}
};

int main()
{
	int n;
	cout << "������ ���� ���� >> ";
	cin >> n;

	Circle* circles = new Circle[n];

	for (int i = 0;i < n;i++)
	{
		int r;
		cout << "�� " << i + 1 << "�� ������ : ";
		cin >> r;
		circles[i].setRadius(r);
	}

	for (int i = 0;i < n;i++)
	{
		cout << "�� " << i + 1 << "�� ���� : " << (circles + i)->getArea() << endl;
	}

	int num = 0;
	for (int i = 0;i < n;i++)
	{
		if (circles[i].getArea() > 100 && circles[i].getArea() < 200)
		{
			num++;
		}
	}

	cout << "������ 100 ~ 200�� ���� ������ " << num << "�� �Դϴ�." << endl;

	delete[] circles;
}