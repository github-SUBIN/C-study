#include <iostream>
using namespace std;

//���� �����غ� Ŭ���� Ÿ���� �޸� ���� �Ҵ�
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
	Circle* p; //Circle Ŭ������ ������ p�� ����
	p = new Circle; //�⺻ �����ڸ� ȣ���Ͽ� Circle ��ü�� �������� �Ҵ��ϰ�, ������ p�� �̸� ����Ű�� ��
	*p = Circle(10); //�Ű����� �����ڸ� ȣ���Ͽ� �������� 10�� ���ο� Circle ��ü�� �����ϰ�, �̸� p�� ����Ű�� ��ü�� �Ҵ�

	cout << p->getArea() << endl; //p�� ����Ű�� Circle ��ü�� ������ ����ϰ� ���
	(*p).setRadius(2);
	cout << p->getArea() << endl;

	delete p; //delete�� �����Ҵ翡���� �ѹ��� ��밡��. �����Ҵ翡�� ����ϸ� ���� �ð� ����. �������� �ι��ص� ���� �ð� ����
}