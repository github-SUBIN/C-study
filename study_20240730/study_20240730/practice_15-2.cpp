#include <iostream>
using namespace std;

template <class T>
void print(T array[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}

void print(char array[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << (int)array[i] << '\t';
	}
	cout << endl;
}

int main()
{
	int x[] = { 1,2,3,4,5 };
	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };

	print(x, 5);
	print(d, 5);

	char c[5] = { 1,2,3,4,5 };
	print(c, 5);
}
//템플릿 함수보다 중복 함수가 우선이다.
//위의 print(x,5)와 print(d,5)는 템플릿 print()함수로부터 구체화되고, print(c,5)는 중복된 print()함수가 우선 바인딩 된다.