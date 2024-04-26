#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double circleArea(double r)
{
	return r * r * M_PI;
}

void display(int a, int b, int c, int d)
{
	cout << "반지름 : " << distance(a,b,c,d) << endl;
	cout << "원면적 : " << circleArea(distance(a, b, c, d)) << endl;
}

int main()
{
	int x1, x2, y1, y2;
	cout << "x1 : ";
	cin >> x1;
	cout << "y1 : ";
	cin >> y1;
	cout << "x2 : ";
	cin >> x2;
	cout << "y2 : ";
	cin >> y2;

	display(x1, y1, x2, y2);
}