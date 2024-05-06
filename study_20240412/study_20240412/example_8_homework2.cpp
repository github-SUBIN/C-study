#include <iostream>
using namespace std;


void swapArray(int* p, int* q, int size)
{
	for (int i = 0; i < size;i++)
	{
		int temp = p[i];
		p[i] = q[i];
		q[i] = temp;
	}
}

void printArray(int* p, int size)
{
	for (int i = 0; i < size;i++)
	{
		cout << p[i] << " ";
	}
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 9,8,7,6,5 };
	int size = sizeof(a) / sizeof(a[0]);

	cout << "원래 배열 a" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "원래 배열 b" << endl;
	for (int i = 0; i < size;i++)
	{
		cout << b[i] << " ";
	}
	cout << "\n" << endl;

	swapArray(a, b, size);

	cout << "바뀐 배열 a" << endl;
	printArray(a, size);
	cout << endl;

	cout << "바뀐 배열 b" << endl;
	printArray(b, size);
	cout << endl;
}