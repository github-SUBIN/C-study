#include <iostream>
using namespace std;

int main()
{
	int score;

	cout << "������ �Է��ϼ��� : ";
	cin >> score;

	switch (score/10)
	{
	case 10:
	case 9:
		cout << "A �Դϴ�.";
		break;
	case 8:
		cout << "B �Դϴ�.";
		break;
	case 7:
		cout << "C �Դϴ�.";
		break;
	case 6:
		cout << "D �Դϴ�.";
		break;
	default:
		cout << "F �Դϴ�.";


	}

}