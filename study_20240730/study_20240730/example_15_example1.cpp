#include <iostream>
using namespace std;

template <class T>
T bigger(T i, T j)
{
	//return (i > j) ? i : j;
	
	if (i > j)
	{
		return i;
	}
	else if (j > i)
	{
		return j;
	}
	
}

int main()
{
	int a = 20;
	int b = 40;

	char c = 'a';
	char d = 'z';

	cout << "bigger(20,40)�� ����� >> " << bigger(a, b) << endl;
	cout << "bigger(a,z)�� ����� >> " << bigger(c, d) << endl;
}