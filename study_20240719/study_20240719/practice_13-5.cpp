#include <iostream>
using namespace std;

class A
{
	int a;
public:
	A(int i)
	{
		cout << "A�� ������" << endl;
		a = i;
	}
	~A()
	{
		cout << "A�� �Ҹ���" << endl;
	}
	void showA()
	{
		cout << a << endl;
	}
};

class B :public A
{
	int b;
public:
	B(int i, int j) : A(i)
	{
		cout << "B�� ������" << endl;
		b = j;
	}
	//B(int i, int j){}��� �ϸ� ������ :A(i) �������
	~B()
	{
		cout << "B�� �Ҹ���" << endl;
	}
	void showB()
	{
		cout << b << endl;
	}
};

int main()
{
	B bb(10, 20);
	bb.showA();
	bb.showB();
}