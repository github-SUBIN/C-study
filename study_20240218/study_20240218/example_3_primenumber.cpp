#include <iostream>
using namespace std;

int main()
{
	int i = 2;
	int count = 0;
	int j = 1;
	int prime = 0;

	for (i;i < 51;i++)
	{
		count = 0;
		j = 1;
		for (j;j <= i;j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			prime++;
			cout << i << endl;
		}
	}
	cout << "ÃÑ ¼Ò¼ö °³¼ö : " << prime;

}