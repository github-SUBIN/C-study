#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 100;i++)
	{
		if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
		{
			cout << i + 1 << "  ";
		}
	}
}