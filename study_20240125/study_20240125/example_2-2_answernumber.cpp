#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	cout << "c : ";
	cin >> c;

	int d = b * b - 4 * a * c;

	if (a == 0)
	{
		if (b == 0)
		{
			cout << a << "x^2 + " << b << "x + " << c << " = 0 �������� ���� ������ 0����.";
		}
		else if(b != 0)
		{
			cout << a << "x^2 + " << b << "x + " << c << " = 0 �������� ���� ������ 1����.";
		}
	}
	else
	{
		if (d < 0)
		{
			cout << a << "x^2 + " << b << "x + " << c << " = 0 �������� ���� ������ 0����.";
		}
		else if (d == 0)
		{
			cout << a << "x^2 + " << b << "x + " << c << " = 0 �������� ���� ������ 1����.";
		}
		else
		{
			cout << a << "x^2 + " << b << "x + " << c << " = 0 �������� ���� ������ 2����.";
		}
	}
}