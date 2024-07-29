#include <iostream>
using namespace std;

class Calculator //�߻� Ŭ���� : ���� ���� �Լ��� �����ϰ� �ִ� �߻� Ŭ����. �� Ŭ������ ���� �ν��Ͻ�ȭ �� �� ������, �̸� ��ӹ޴� Ŭ�������� ��� ���� ���� �Լ��� �����ؾ� �Ѵ�.
{
public:
	virtual int add(int a, int b) = 0;
	virtual int subtract(int a, int b) = 0;
	virtual double average(int a[], int size) = 0;
};

class GoodCalc :public Calculator //GoodCalc�� Calculator Ŭ������ ��ӹ޾� ��� ���� �Լ��� �����ߴ�. ���� GoodCalc�� �ν��Ͻ�ȭ �� �� �֤��� ��ü���� Ŭ�����̴�.
{
public:
	int add(int a, int b)
	{
		return a + b;
	}
	int subtract(int a, int b)
	{
		return a - b;
	}
	double average(int a[], int size)
	{
		int sum = 0;
		for (int i = 0;i < size;i++)
		{
			sum += a[i];
		}
		return sum / size;
	}
};

int main()
{
	int a[] = { 1,2,3,4,5 };
	Calculator* p = new GoodCalc();
	//GoodCalc Ŭ������ �ν��Ͻ��� �������� �����Ѵ�.
	//GoodCalc �ν��Ͻ��� �����͸� Calculator Ŭ���� Ÿ���� ������ p�� �Ҵ��Ѵ�.
	//�̴� �������� Ȱ���� ���̴�. Calculator Ÿ���� ������ p�� GoodCalc ��ü�� ����Ű�� ������, p�� ���� Calculator Ŭ������ �������̽��� ����Ͽ� GoodCalc Ŭ������ ������ ȣ���� �� �ִ�.

	cout << p->add(2, 3) << endl; //GodCalc Ŭ������ add �Լ��� ȣ��
	cout << p->subtract(2, 3) << endl;
	cout << p->average(a, 5) << endl;

	delete p; //���� �Ҵ�� �޸� ���� �޸� ���� ����
}
/*
�� �ڵ�� ��ü ���� ���α׷����� �������� Ȱ���Ͽ� �߻� Ŭ������ ���� ��ӹ��� Ŭ������ ������ ����ϴ� ����.
Calculator Ÿ���� ������ p�� ���� GoodCalc ��ü�� �Լ��� ȣ�������ν� �������̽��� ������ �и��ϰ�, �ڵ� ������ ����
*/

/*
Calculator Ÿ���� ������ p�� ��� GoodCalc ��ü�� �Լ��� ȣ���� �� �ֳ�?
�̴� C++������ ������ ���� �����̴�. �������� ���� Ŭ���� �����Ͱ� ���� Ŭ���� ��ÿ�� ����ų ��, ���� Ŭ������ ������
�Լ��� ȣ��ǵ��� �ϴ� ����̴�. �̸� �����ϰ� �ϴ� �ٽ� ��Ҵ� �����Լ� �̴�.

Calculator* p = new GoodCalc();
new GoodCalc()�� GoodCalc ��ü�� �������� �����ϰ�, p�� �� ��ü�� ����Ų��. 
p�� Calculator Ÿ���� ������������, �����δ� GoodCalc ��ü�� ����Ű�� �ִ�.
*/