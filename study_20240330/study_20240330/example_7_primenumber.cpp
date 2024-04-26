#include <iostream>
using namespace std;
//다시 이해

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
		cout << x << "는 소수의 합으로 표시될 수 없습니다." << endl;
	}
}

int main()
{
	int n;
	cout << "양의 정수를 입력하세요 >> ";
	cin >> n;
	primenumber(n);
}