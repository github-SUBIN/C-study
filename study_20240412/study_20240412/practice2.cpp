#include <iostream>
using namespace std;

int main()
{
	int n[] = { 1,2,3,4,5,6,7,8,9 };
	int* p = n;

	cout << n[2] << endl;
	cout << *p << endl;
	cout << n[0] << endl;
	cout << p << endl;
	cout << n + 2 << endl;
	cout << p + 2 << endl;
	cout << p + 12 << endl;
	cout << n + 12 << endl;
	*p = 99;
	cout << *p << endl;
	cout << n[0] << endl;
	cout << p[0] << endl;

}