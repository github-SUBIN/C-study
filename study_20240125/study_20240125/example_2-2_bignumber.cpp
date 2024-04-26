#include <iostream>
using namespace std;

int main()
{
	int x1, x2, x3;

	cout << "서로 다른 정수를 세개 입력하시오." << endl;
	cout << "첫번째 정수 : ";
	cin >> x1;
	cout << "두번째 정수 : ";
	cin >> x2;
	cout << "세번째 정수 : ";
	cin >> x3;

	int large;

	if (x1 >= x2 && x1>=x3)
	{
		cout << "가장 큰 수는 " << x1 << "입니다.";
	}
	else if (x2 >= x1 && x2 >= x3)
	{
		cout << "가장 큰 수는 " << x1 << "입니다.";
	}
	else
	{
		cout << "가장 큰 수는 " << x3 << "입니다.";
	}
}