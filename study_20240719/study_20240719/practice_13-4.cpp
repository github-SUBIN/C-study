#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "A(�θ�) ������" << endl;
	}
	~A()
	{
		cout << "A(�θ�) �Ҹ���" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "B(�ڽ�) ������" << endl;
	}
	~B()
	{
		cout << "B(�ڽ�) �Ҹ���" << endl;
	}
};

int main()
{
	B d;
}