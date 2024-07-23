#include <iostream>
using namespace std;

class A
{
protected:
	int a, b;
public:
	void setAB(int i, int j)
	{
		a = i;
		b = j;
	}
};

class B :public A
{
	int c;
public:
	void setC(int n)
	{
		c = n;
	}
	void showABC()
	{
		cout << a << ", " << b << ", " << c << endl;
	}
};

int main()
{
	A aa;
	B bb;
	aa.setAB(5, 6);
	
	//aa.a;
	//bb.b;

	bb.setAB(1, 2);
	bb.setC(3);
	bb.showABC();
}