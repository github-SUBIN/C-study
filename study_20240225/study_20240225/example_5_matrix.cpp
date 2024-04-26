#include <iostream>
using namespace std;

int main()
{
	//A matrix 출력
	int A[3][2] = { 1,2,3,4,5,6 };
	cout << "A matrix" << endl;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			cout << A[i][j] << "  ";
		}
		cout << endl;
	}

	//B matrix 출력
	int B[2][4] = { 1,2,3,4,5,6,7,8 };
	cout << "B matrix" << endl;
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			cout << B[i][j] << "  ";
		}
		cout << endl;
	}

	//AXB matrix 행렬곱으로 숫자 대입
	int AXB[3][4] = { 0 };
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0; j < 4;j++)
		{
			for (int n = 0;n < 2;n++)
			{
				AXB[i][j] += A[i][n] * B[n][j];
			}
		}
	}

	//AXB matrix 출력
	cout << "AXB matrix" << endl;
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			cout << AXB[i][j] << "  ";
		}
		cout << endl;
	}
}