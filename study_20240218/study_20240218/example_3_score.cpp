#include <iostream>
using namespace std;

int main()
{
	cout << "성적 입력을 종료 하려면 음수를 입력하시오." << endl;
	int score = 0;
	int total = 0;
	int i = 0;


	while (score >= 0)
	{
		cout << "성적을 입력하시오 : ";
		cin >> score;
		if (score >= 0)
		{
			total += score;
			i++;
		}
	}
	cout << i << "명 학생의 평균점수는 " << total / i << "점 입니다.";

}