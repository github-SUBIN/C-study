#include <iostream>
using namespace std;

int main()
{
	for (int i = 4;i >= 0;i--)
	{
		for (int e=i;e > 0;e--)
		{
			cout << " ";
		}
		int j = 5 - i;
		for (j;j > 0;j--)
		{
			cout << "*";
		}
		cout << "\n";

	}
	cout << "\n";

	for (int a = 4;a >= 0;a--)
	{
		for (int t = a;t > 0;t--)
		{
			cout << " ";
		}
		for (int b = 5 - a;b > 0;b--)
		{
			cout << "*";
		}
		for (int c = 4 - a;c > 0;c--)
		{
			cout << "*";
		}
		cout << "\n";
	}


}