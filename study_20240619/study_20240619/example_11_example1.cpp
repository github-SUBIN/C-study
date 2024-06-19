#include <iostream>
using namespace std;

int big(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int big(int a[], int size)
{
	int max = a[0];

	for (int i = 1;i < size;i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

int main()
{
	int array[5] = { 1,9,-2,8,6 };

	cout << big(3, 1) << endl;
	cout << big(array, 5) << endl;
}