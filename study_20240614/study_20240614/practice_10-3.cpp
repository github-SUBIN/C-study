#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle() //�Ű� ���� ���� ������ ���� �Ű� ���� �ִ� �����ڸ� �ִ� ���¿��� ��ü �迭�� ȣ�� �Ұ���. ������ �Ű� ���� ���� ������ �־�� ȣ�� ����
	{
		radius = 1;
	}
	Circle(int r) //�ƹ� �����ڵ� ������ �⺻ ������ �ڵ����� �������� ��ü �迭 ��� ����
	{
		radius = r;
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
	Circle pizza;
	Circle waffle(10);
	Circle circleArray[3] = { Circle(),Circle(2),Circle(7) }; //�����ڸ� �̿��� �迭�� ���� �ʱ�ȭ �̷��� ����

	cout << "pizza : " << pizza.getArea() << endl;
	pizza.setRadius(5);
	cout << "new pizza : " << pizza.getArea() << endl;
	cout << "waffle : " << waffle.getArea() << endl;
	cout << "circle1 : " << circleArray[0].getArea() << endl;
	cout << "circle2 : " << circleArray[1].getArea() << endl;
	cout << "circle3 : " << circleArray[2].getArea() << endl;
}