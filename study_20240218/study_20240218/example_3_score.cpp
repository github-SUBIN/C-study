#include <iostream>
using namespace std;

int main()
{
	cout << "���� �Է��� ���� �Ϸ��� ������ �Է��Ͻÿ�." << endl;
	int score = 0;
	int total = 0;
	int i = 0;


	while (score >= 0)
	{
		cout << "������ �Է��Ͻÿ� : ";
		cin >> score;
		if (score >= 0)
		{
			total += score;
			i++;
		}
	}
	cout << i << "�� �л��� ��������� " << total / i << "�� �Դϴ�.";

}