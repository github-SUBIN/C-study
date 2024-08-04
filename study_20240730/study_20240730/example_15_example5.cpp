#include <iostream>
using namespace std;

/*
class AA1
{
	int x, y;
public:
	AA1(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
	void show()
	{
		cout << x << ", " << y << endl;
	}
};

class AA2
{
	double x, y;
public:
	AA2(double xx, double yy)
	{
		x = xx;
		y = yy;
	}
	void show()
	{
		cout << x << ", " << y << endl;
	}
};

class AA3
{
	int x;
	string y;
public:
	AA3(int xx, string yy)
	{
		x = xx;
		y = yy;
	}
	void show()
	{
		cout << x << ", " << y << endl;
	}
};

int main()
{
	AA1 aa1(3, 4);
	AA2 aa2(2.9, 4.2);
	AA3 aa3(5, "Kim");

	aa1.show();
	aa2.show();
	aa3.show();
}
*/

template <class T, class F>
class AA
{
	T a;
	F b;
public:
	AA(T aa, F bb)
	{
		a = aa;
		b = bb;
	}
	void show()
	{
		cout << a << ", " << b << endl;
	}
};


int main()
{
	AA<int, int> aa1(3, 4);
	AA<double, double> aa2(2.9, 4.2);
	AA<int, string> aa3(5, "Kim");

	aa1.show();
	aa2.show();
	aa3.show();
}

//���׸� '�Լ�'������ (int, string)���� �ΰ��� ������ Ÿ���� �ٸ��� ��üȭ �Ұ����ϴ�.
//������ ���׸� 'Ŭ����'������ ���� �Է��ϰ���� ������ Ÿ���� �޶� ��üȭ �����ϴ�.