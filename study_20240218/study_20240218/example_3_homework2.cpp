#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	cout << "정수1 : ";
	cin >> num1;
	cout << "정수2 : ";
	cin >> num2;
	cout << "--------------------------" << endl;
	int result = pow(num1, num2);
	cout << num1 << "^" << num2 << " = " << result << endl;

	int sum = 0;
	int a = result;
	while (a > 0)
	{
		int b = a % 10;
		sum += b;
		a = a / 10;
	}
	cout << "자릿수 합 : " << sum;

}