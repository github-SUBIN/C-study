#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "�Է��� ������ ������? : ";
	cin >> n;

	if (n <= 0)
	{
		cout << "0���� ū ����� �Է��ϼ���.";
		return 0;
	}

	int* p = new int[n]; //n���� ���� �迭 ���� �Ҵ�
	//�迭�� ���� �Ҵ� �� �ʱ�ȭ �Ұ���!! (������Ÿ��* �����ͺ��� = new ������Ÿ��(�ʱⰪ) �� �ʱ�ȭ ������)
	//int *p = new int(20) �̷��� int Ÿ�� �Ҵ��� �ʱ�ȭ ����!

	if (!p)
	{
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0;i < n;i++)
	{
		cout << i + 1 << "��° ���� >> ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += p[i];
	}
	cout << "��� = " << (double)sum / n << endl;

	delete[] p; //�迭�϶� [] ���̴°� ���� ����, �迭 �ƴҶ� []���̸� �ȵ� - �Ѵ� ������ �ƴѵ� �������� ��ȯ
}