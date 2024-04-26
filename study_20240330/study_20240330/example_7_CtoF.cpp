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
	cout << "¼·¾¾ ¿Âµµ : ";
	cin >> c;

	cout << "¼·¾¾ " << c << "µµ´Â È­¾¾ ¿Âµµ " << change(c) << "ÀÔ´Ï´Ù.";
}