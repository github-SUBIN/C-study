#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x[8] = { 0 };
	int y[8] = { 0 };

	for (int i = 0;i < 8;i++)
	{
		cout << "x축을 입력하시오 : ";
		cin >> x[i];
		cout << "y축을 입력하시오 : ";
		cin >> y[i];
		cout << "--------------------------" << endl;
	}

	double len = 0;

	//둘레 공식 - 이 문제에서만 쓸 수 있다는 단점
	/*
	for (int i = 0;i < 7;i++)
	{
		len += sqrt((x[i] - x[i + 1]) * (x[i] - x[i + 1]) + (y[i] - y[i + 1]) * (y[i] - y[i + 1]));
	}
	len += sqrt((x[7] - x[0]) * (x[7] - x[0]) + (y[7] - y[0]) * (y[7] - y[0]));
	cout << len;
	*/

	for (int i = 0;i < 8;i++)
	{
		//다음 점을 index에 넣어서 8이상으로 숫자가 안넘어가게 만듦
		int index = (i + 1) % 8;

		len += sqrt((x[i] - x[index]) * (x[i] - x[index]) + (y[i] - y[index]) * (y[i] - y[index]));
	}
	cout << len;
}