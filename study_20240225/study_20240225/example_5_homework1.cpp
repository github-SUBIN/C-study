#include <iostream>
using namespace std;

int main()
{
	//random�̶�� �̸��� �迭 �����ϰ� 100�� ĭ �ȿ� 0�� ä��
	int random[100] = { 0 };

	//random �迭 �ȿ� 0~100���� ������ ���� �Է� �� ���
	for (int i = 0;i < sizeof(random) / sizeof(random[0]);i++)
	{
		random[i] = rand() % 101;
		//random[i] = srand(time(0));
		cout << random[i] << "  ";
	}

	cout << endl;
	cout << endl;

	//int a = 0;
	
	/*
	//1. random �迭 �ϳ��� �� �� - ���ؼ� �� ū���� �ٲ�ġ�� �� - �迭�� �� ū���� �ٽ� �Է�
	for (a ;a < 99;a++)
	{
		if (random[a] >= random[a + 1])
		{
			random[a + 1] = random[a];
		}

		else
		{
			random[a] = random[a + 1];
		}
	}
	*/
	
	/*
	//2. �� ū���� ���������� �ٲٴ� �ݺ���
	for (int a = 0;a < 99;a++)
	{
		if (random[a] > random[a + 1])
		{
			//��������
			int temp = random[a];
			random[a] = random[a + 1];
			random[a + 1] = temp;
		}
	}
	*/

	//3, �� ū���� ���������� �ٲ� ���������� ū������ �Ϻ��ϰ� ��迭�Ǵ� �ݺ���
	for (int i = 0; i < sizeof(random) / sizeof(random[0]) - 1; i++) {
		for (int j = 0; j < sizeof(random) / sizeof(random[0]) - i - 1; j++) {
			if (random[j] > random[j + 1]) {
				int temp = random[j];
				random[j] = random[j + 1];
				random[j + 1] = temp;
			}
		}
	}

	cout << endl;
	cout << endl;

	//�ٲ�ġ�� �� �迭 ����غ�
	for (int i = 0;i < sizeof(random) / sizeof(random[0]);i++)
	{
		cout << random[i] << "  ";
	}

	cout << endl;
	cout << endl;

	//�ٲ�ġ�� ����� �Ͼ�ٸ� �迭�� ���� ������ ��ġ�� �� ��������� ���� ū���� ���ð���
	cout << "�迭 �� �ִ� : " << random[99];

	return 0;
	
}


/*
#include <iostream>
#include <cstdlib> // rand �Լ��� ����ϱ� ���� ���
#include <ctime>   // time �Լ��� ����ϱ� ���� ���
using namespace std;

int main()
{
	// ���� �����⸦ �ʱ�ȭ�մϴ�.
	srand(static_cast<unsigned int>(time(0)));

	const int SIZE = 100;
	int random[SIZE] = { 0 };

	// �迭�� ������ ���� ä��ϴ�.
	for (int i = 0; i < SIZE; ++i)
	{
		random[i] = rand() % 101;
		cout << random[i] << "  ";
	}
	cout << endl << endl;

	// ���� ���� �˰����� ����Ͽ� �迭�� �����մϴ�.
	for (int i = 0; i < SIZE - 1; ++i)
	{
		for (int j = 0; j < SIZE - 1 - i; ++j)
		{
			if (random[j] > random[j + 1])
			{
				int temp = random[j];
				random[j] = random[j + 1];
				random[j + 1] = temp;
			}
		}
	}

	// ���ĵ� �迭�� ����մϴ�.
	for (int i = 0; i < SIZE; ++i)
	{
		cout << random[i] << "  ";
	}
	cout << endl << endl;

	// �ִ� ���
	int maxIndex = SIZE - 1;
	cout << "�迭 �� �ִ� : " << random[maxIndex] << endl;

	return 0;
}
*/
