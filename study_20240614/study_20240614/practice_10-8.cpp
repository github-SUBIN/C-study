#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();

	void setRadius(int r)
	{
		radius = r;
	}

	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

Circle::Circle()
{
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::Circle(int r)
{
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle()
{
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main()
{
	Circle* p;
	Circle* q;

	p = new Circle;
	q = new Circle(30);
	
	/*
	Circle* p = new Circle;
	Circle* q = new Circle(30);
	*/

	cout << "p area = " << p->getArea() << endl; //p�� ����Ű�� ��ü�� ������ ����ϰ� ���
	cout << "q area = " << q->getArea() << endl; //q�� ����Ű�� ��ü�� ������ ����ϰ� ���

	delete p; //p�� ����Ű�� ��ü�� �޸𸮿��� �����ϰ�, �Ҹ��ڸ� ȣ��
	delete q; //q�� ����Ű�� ��ü�� �޸𸮿��� �����ϰ�, �Ҹ��ڸ� ȣ��
	//delete �����ڴ� new�� ���� �Ҵ�� �޸𸮸� �����ϸ�, �� �������� �ش� ��ü�� �Ҹ��ڰ� �ڵ����� ȣ��ȴ�.
	//Ŭ�������� �Ҹ��ڸ� �������� �ʴ���, �����Ϸ��� �⺻ �Ҹ��ڸ� �ڵ����� �����Ѵ�. �⺻ �Ҹ��ڴ� Ŭ������ ���ǵ� ��� ��� �������� ���������� �Ҹ��Ų��.
	//�⺻ �Ҹ��ڴ� Ư���� �۾� ���� ��ü�� ������
	//�⺻ �Ҹ��ڴ� ��� ������ �⺻ �ڷ����̱� ������ ���ٸ� �߰� �۾� ���� �޸𸮸� ������.
	//�߰����� �Ҹ��� �޽��� ����� ������, �޸𸮴� ���������� ������.
	//�׷��� �Ҹ��ڰ� �ʿ��� ��Ȳ - Ŭ������ ���� �Ҵ�� �޸𸮸� �����ϰ� �ִ� ���, Ŭ������ �����̳� ��Ʈ��ũ ���� ���� ���ҽ��� �����ϰ� �ִ� ���, ��Ÿ Ư���� ���� �۾��� �ʿ��� ���
}