#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "3�ڸ� �̻� �ڿ����� �Է��ϼ��� : ";
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
