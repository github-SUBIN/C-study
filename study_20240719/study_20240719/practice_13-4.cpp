#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "A(부모) 생성자" << endl;
	}
	~A()
	{
		cout << "A(부모) 소멸자" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "B(자식) 생성자" << endl;
	}
	~B()
	{
		cout << "B(자식) 소멸자" << endl;
	}
};

int main()
{
	B d;
}