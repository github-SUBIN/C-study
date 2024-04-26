#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "3자리 이상 자연수를 입력하세요 : ";
	cin >> num;
	cout << "reverse number : ";

	int n = num;

	while (n != 0)
	{
		int a = n % 10;
		cout << a;
		n /= 10;
	}
}
