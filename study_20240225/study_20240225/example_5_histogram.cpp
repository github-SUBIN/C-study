#include <iostream>
using namespace std;

int main()
{
	//score 배열에 점수 초기화
	int score[] = { 38,29,54,68,43 };

	//점수만큼 *출력
	for (int i = 0;i < sizeof(score) / sizeof(score[i]);i++)
	{
		cout << i+1 << "번 (" << score[i] << "점) : ";
		for (int j = 0;j < score[i];j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}