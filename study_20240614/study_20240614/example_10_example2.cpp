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
	Circle* circles = new Circle[3];

	circles[0].setRadius(10);
	circles[1].setRadius(20);
	circles[2].setRadius(30);

	for (int i = 0;i < 3;i++)
	{
		cout << circles[i].getArea() << endl;
	}
	/*
	//�̷��� �ϸ� ������. circles�� �������� for������ circles++�� �Ű�� ������ delete ����� ���� �߻�
	for (int i = 0;i < 3;i++)
	{
		cout << circles->getArea() << endl;
		circles++;
	}

	delete[] circles;

	//�̸� ���� ���ؼ�
	Circle* p =circles;
	for(int i=0;i<3;i++)
	{
	cout<<p->getArea()<<endl;
	p++
	}
	delete[] circles;
	//�̷��� �ϸ� ���� �ȶ�!
	*/

	for (int i = 0;i < 3;i++)
	{
		cout << (circles + i)->getArea() << endl;
	}

	delete[] circles;
}