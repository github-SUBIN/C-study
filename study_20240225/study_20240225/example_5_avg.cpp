#include <iostream>
using namespace std;

int main()
{
	//score 배열 설정, 합 저장할 total 변수 설정
	int score[5];
	int total = 0;

	//키보드로 배열에 점수 입력
	for (int i = 0;i < 5;i++)
	{
		cout << i + 1 << "번 학생 점수 : ";
		cin >> score[i];
	}

	//배열에 있는 점수들 합해서 total에 대입
	for (int j = 0;j < 5;j++)
	{
		total += score[j];
	}

	//평균 계산해서 출력 -> 5.0으로 나누면 실수값으로 출력됨
	cout << "평균 점수 : " << total / 5.0 << "점";
}