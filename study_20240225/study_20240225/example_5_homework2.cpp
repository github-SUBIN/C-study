#include <iostream>
using namespace std;

int main()
{
	int x[6] = { 0 };
	int y[6] = { 0 };

	int i = 0;

	for (int i = 0;i < 6;i++)
	{
		cout << "x축을 입력하시오 : ";
		cin >> x[i];
		cout << "y축을 입력하시오 : ";
		cin >> y[i];
		cout << "--------------------------" << endl;
		//cout << "(" << x[i] << ", " << y[i] << ")" << endl;
	}
	
	int sum_x = 0;
	int sum_y = 0;

	for (int i = 0;i < 6;i++)
	{
		sum_x += x[i];
		sum_y += y[i];
	}

	for (int i = 0;i < 5;i++)
	{
		cout << "(" << x[i] << ", " << y[i] << "), ";
	}
	cout << "(" << x[5] << ", " << y[5] << ")" << "의 중점의 좌표 : (" << sum_x / 6.0 << ", " << sum_y / 6.0 << ")";
}