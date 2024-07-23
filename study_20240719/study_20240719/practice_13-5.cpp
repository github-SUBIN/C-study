#include <iostream>
using namespace std;

class A
{
	int a;
public:
	A(int i)
	{
		cout << "A의 생성자" << endl;
		a = i;
	}
	~A()
	{
		cout << "A의 소멸자" << endl;
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
		cout << "B의 생성자" << endl;
		b = j;
	}
	//B(int i, int j){}라고만 하면 오류뜸 :A(i) 해줘야함
	~B()
	{
		cout << "B의 소멸자" << endl;
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