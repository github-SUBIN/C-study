#include <iostream>
using namespace std;

int main()
{
	//score ��� 3x5�� ����
	int score[3][5];

	//score ��Ŀ� �������� ���� ����(���ΰ�ħ�Ҷ����� �޶����°� �ƴ�)
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			score[i][j] = rand() % 101;
		}
	}

	//��Ŀ� ������ �� �� �ݺ��� ���
	for (int i = 0;i < 3;i++)
	{
		cout << i + 1 << "�� : ";
		for (int j = 0;j < 5;j++)
		{
			cout << score[i][j] << "   ";
		}
		cout << "\n";
	}

	//���ܳ���
	cout << "-------------------------------------------" << endl;

	//total�迭�� �� ���� ���� �� ����
	int total[3] = { 0,0,0 };
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			total[i] += score[i][j];
		}
	}

	//total �迭 �����ͼ� ��� ��� ���
	for (int i = 0;i < 3;i++)
	{
		cout << i + 1 << "�� ��� : " << total[i] / 5.0 << endl;
	}
}