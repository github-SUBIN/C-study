#include <iostream>
using namespace std;
//�ٽ� ����

bool isPrime(int a)
{
	if (a <= 1)
	{
		return false;
	}
	for (int i = 2;i < a;i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}

void primenumber(int x)
{
	bool found = false;
	for (int i = 2;i < x;i++)
	{
		if (isPrime(i) && isPrime(x - i))
		{
			cout << x << " = " << i << " + " << x - i << endl;
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << x << "�� �Ҽ��� ������ ǥ�õ� �� �����ϴ�." << endl;
	}
}

int main()
{
	int n;
	cout << "���� ������ �Է��ϼ��� >> ";
	cin >> n;
	primenumber(n);
}