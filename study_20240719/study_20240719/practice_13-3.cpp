#include <iostream>
using namespace std;

class A
{
	int x;
public:
	void setX(int i)
	{
		x = i;
	}
	void showX()
	{
		cout << x << endl;
	}
};

class B :private A
{
	int y;
public:
	void setY(int i)
	{
		y = i;
	}
	void showY()
	{
		cout << y << endl;
	}
};

int main()
{
	A aa;
	B bb;

	aa.setX(1);
	aa.showX();

	//bb.setX(1);
	//bb.showX();
	bb.setY(2);
	bb.showY();

}