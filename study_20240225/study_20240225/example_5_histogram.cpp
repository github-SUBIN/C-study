#include <iostream>
using namespace std;

int main()
{
	//score �迭�� ���� �ʱ�ȭ
	int score[] = { 38,29,54,68,43 };

	//������ŭ *���
	for (int i = 0;i < sizeof(score) / sizeof(score[i]);i++)
	{
		cout << i+1 << "�� (" << score[i] << "��) : ";
		for (int j = 0;j < score[i];j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}