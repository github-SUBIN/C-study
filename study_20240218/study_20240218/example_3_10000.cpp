#include <iostream>
using namespace std;

int main()
{
	/*
	int sum = 0;
	int i = 0;
	while (sum < 10000)
	{
		sum += i;
		if (sum < 10000)
		{
			i++;
		}
	}
	cout << "n = " << i << " sum = " << sum;
	*/
	int sum = 0;
	int i = 0;
	for (i;;i++)
	{
		sum += i;
		if (sum > 10000)
		{
			break;
		}
	}
	cout << "n = " << i << " sum = " << sum;

}