#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x[8] = { 0 };
	int y[8] = { 0 };

	for (int i = 0;i < 8;i++)
	{
		cout << "x���� �Է��Ͻÿ� : ";
		cin >> x[i];
		cout << "y���� �Է��Ͻÿ� : ";
		cin >> y[i];
		cout << "--------------------------" << endl;
	}

	double len = 0;

	//�ѷ� ���� - �� ���������� �� �� �ִٴ� ����
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
		//���� ���� index�� �־ 8�̻����� ���ڰ� �ȳѾ�� ����
		int index = (i + 1) % 8;

		len += sqrt((x[i] - x[index]) * (x[i] - x[index]) + (y[i] - y[index]) * (y[i] - y[index]));
	}
	cout << len;
}