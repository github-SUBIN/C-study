#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T a1[], T a2[], int size)
{
	for (int i = 0;i < size;i++)
	{
		if (a1[i] != a2[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int x1[] = { 1,10,100,5,6 };
	int x2[] = { 1,10,100,5,6 };

	double y1[] = { 3.2,10.9,4.2 };
	double y2[] = { 3.2,10.5,1.3 };

	string z1[] = { "kim", "park","lee","hong" };
	string z2[] = { "kim", "park","lee","hong" };

	cout << boolalpha << equalArrays(x1, x2, 5) << endl;
	cout << boolalpha << equalArrays(y1, y2, 3) << endl;
	cout << boolalpha << equalArrays(z1, z2, 4) << endl;
}