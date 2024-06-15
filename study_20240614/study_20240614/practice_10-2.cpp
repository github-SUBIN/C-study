#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle()
	{
		radius = 1;
	}
	Circle(int r)
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
	Circle circleArray[3]; //��ü �迭 ������ �����ڷ� ȣ���ϴµ� �Ű� ���� ���� �����ڷθ� ȣ�� ����
	Circle circle1(100); //circle1[3](10) �̷��� �Ұ���

	cout << "ù��° : " << circleArray[0].getArea() << endl;
	circleArray[1].setRadius(3);
	cout << "�ι�° : " << circleArray[1].getArea() << endl;
	circleArray[2].setRadius(10);
	cout << "����° : " << circleArray[2].getArea() << endl;
	cout << "�׹�° : " << circle1.getArea() << endl;
	circle1.setRadius(1);
	cout << "�ټ���° : " << circle1.getArea() << endl;
}