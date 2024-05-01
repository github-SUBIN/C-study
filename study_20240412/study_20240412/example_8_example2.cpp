#include <iostream>
using namespace std;

bool equalArray(int* a1, int* b1, int size)
{
	/*
	for (int i = 0;i < size;i++)
	{
		if (a1[i] == b1[i])
		{

		}
		else
		{
			return 0;
		}
	}
	return 1;
	*/

	for (int i = 0;i < size;i++)
	{
		if (*a1 == *b1)
		{

		}
		else
		{
			return 0;
		}
		a1++;
		b1++;
	}
	return 1;
}

int main()
{
	int size = 5;

	cout << "각 배열에 정수를 5개씩 입력하시오." << endl;

	int a[5];
	int b[5];

	cout << "a : ";
	for (int i = 0;i < 5;i++)
	{
		cin >> a[i];
	}

	cout << "b : ";
	for (int i = 0;i < 5;i++)
	{
		cin >> b[i];
	}

	if (equalArray(a,b,size))
	{
		cout << "arrays equal" << endl;
	}
	else
	{
		cout << "arrays not equal" << endl;
	}
	
}