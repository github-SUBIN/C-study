#include <iostream>
using namespace std;

int main()
{
	//score �迭 ����, �� ������ total ���� ����
	int score[5];
	int total = 0;

	//Ű����� �迭�� ���� �Է�
	for (int i = 0;i < 5;i++)
	{
		cout << i + 1 << "�� �л� ���� : ";
		cin >> score[i];
	}

	//�迭�� �ִ� ������ ���ؼ� total�� ����
	for (int j = 0;j < 5;j++)
	{
		total += score[j];
	}

	//��� ����ؼ� ��� -> 5.0���� ������ �Ǽ������� ��µ�
	cout << "��� ���� : " << total / 5.0 << "��";
}