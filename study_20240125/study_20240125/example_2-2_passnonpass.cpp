#include <iostream>
using namespace std;

int main()
{
	int p, s;
	cout << "�ʱ����� : ";
	cin >> p;
	cout << "�Ǳ����� : ";
	cin >> s;

	double a = (p + s) / 2.0;

	/*
	if (p >= 70 && s >= 70)
	{
		cout << "----------------" << endl;
		cout << "��� : " << a << endl;
		if (a >= 80)
		{
			cout << "���� : �հ�";
		}
		else
		{
			cout << "���� : ���հ�";
		}
	}
	else if (p < 70 || s < 70)
	{
		cout << "----------------" << endl;
		cout << "��� : " << a << endl;
		if (a >= 80)
		{
			cout << "���� : ����";
		}
		else
		{
			cout << "���� : ���հ�";
		}
	}
	else
	{
		cout << "----------------" << endl;
		cout << "��� : " << a << endl;
		cout << "���� : ���հ�";
	}
	*/

	if (a >= 80)
	{
		if (p >= 70 && s >= 70)
		{
			cout << "----------------" << endl;
			cout << "��� : " << a << endl;
			cout << "���� : �հ�";
		}
		else
		{
			cout << "----------------" << endl;
			cout << "��� : " << a << endl;
			cout << "���� : ����";
		}
	}
	else
	{
		cout << "----------------" << endl;
		cout << "��� : " << a << endl;
		cout << "���� : ���հ�";
	}
}