#include <iostream>
using namespace std;

/*
int Max(int i, int j)
{
	return i > j ? i : j;
}

double Max(double i, double j)
{
	return i > j ? i : j;
}

char Max(char i, char j)
{
	return i > j ? i : j;
}
*/

template <class T> 
T Max(T i, T j)
{
	return i > j ? i : j;
}

template <class T1, class T2> 
void func(T1 x, T2 y)
{
	cout << x << " " << y << endl;
}

int main()
{
	func("kim", 30);
	func(20, 49.2);
}