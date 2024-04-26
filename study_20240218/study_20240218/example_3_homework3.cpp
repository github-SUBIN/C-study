#include <iostream>
using namespace std;

int main()
{
	int n1;
	int n2;

	cout << "두개의 정수를 입력하세요." << endl;
	cout << "n1 : ";
	cin >> n1;
	cout << "n2 : ";
	cin >> n2;

	int a = n1;
	int b = n2;

	int result = 0;

	if (a > b)
	{
		while (b != 0)
		{
			int r = a % b;
			a = b;
			b = r;
		}
		result = a;
	}
	else
	{
		while (a != 0)
		{
			int r = b % a;
			b = a;
			a = r;
		}
		result = b;
	}

	cout << n1 << "(와)과 " << n2 << "의 최대공약수는 " << result;
}