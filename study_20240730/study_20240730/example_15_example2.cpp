#include <iostream>
using namespace std;

template <class T>
T add(T a[], int size) //T a[], T size라고 쓰지 않도록 주의하기! T는 다 같은 타입만을 의미하기 때문!
{
	T sum = 0;
	for (int i = 0;i < size;i++)
	{
		sum += a[i];
	}

	return sum;
}

int main()
{
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,3.4,4.5,5.6,6.7 };

	cout << "sum of x[] : " << add(x, 5) << endl;
	cout << "sum of d[] : " << add(d, 6) << endl;
}