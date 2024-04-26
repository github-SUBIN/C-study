#include <iostream>
using namespace std;

int main()
{
	for (int i = 1;i < 10;i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 1;j <= i;j++)
			{
				cout << i * j << "  ";
			}
			cout << "\n";
		}
	}
}