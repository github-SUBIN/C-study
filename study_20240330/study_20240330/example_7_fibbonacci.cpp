#include <iostream>
using namespace std;

int fibbonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fibbonacci(n - 2) + fibbonacci(n - 1);
	}
}

int main()
{
	int n;
	cout << "������ �ϳ� �Է��Ͻÿ�.";
	cin >> n;
	//fibbonacci(n);

	for (int i = 0;i < n;i++)
	{
		cout << fibbonacci(i) << endl;
	}
}