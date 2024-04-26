#include <iostream>
using namespace std;

int main()
{
	int score;

	cout << "점수를 입력하세요 : ";
	cin >> score;

	switch (score/10)
	{
	case 10:
	case 9:
		cout << "A 입니다.";
		break;
	case 8:
		cout << "B 입니다.";
		break;
	case 7:
		cout << "C 입니다.";
		break;
	case 6:
		cout << "D 입니다.";
		break;
	default:
		cout << "F 입니다.";


	}

}