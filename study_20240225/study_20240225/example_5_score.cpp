#include <iostream>
using namespace std;

int main()
{
	//score 행렬 3x5로 설정
	int score[3][5];

	//score 행렬에 랜덤으로 숫자 대입(새로고침할때마다 달라지는거 아님)
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			score[i][j] = rand() % 101;
		}
	}

	//행렬에 대입한 수 각 반별로 출력
	for (int i = 0;i < 3;i++)
	{
		cout << i + 1 << "반 : ";
		for (int j = 0;j < 5;j++)
		{
			cout << score[i][j] << "   ";
		}
		cout << "\n";
	}

	//문단나눔
	cout << "-------------------------------------------" << endl;

	//total배열에 각 반의 점수 합 저장
	int total[3] = { 0,0,0 };
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			total[i] += score[i][j];
		}
	}

	//total 배열 가져와서 평균 계산 출력
	for (int i = 0;i < 3;i++)
	{
		cout << i + 1 << "반 평균 : " << total[i] / 5.0 << endl;
	}
}