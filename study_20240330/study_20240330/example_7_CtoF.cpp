#include <iostream>
using namespace std;

double change(double x)
{
	double f = (9.0 / 5.0) * x + 32;
	return f;
}

int main()
{
	double c;
	cout << "���� �µ� : ";
	cin >> c;

	cout << "���� " << c << "���� ȭ�� �µ� " << change(c) << "�Դϴ�.";
}