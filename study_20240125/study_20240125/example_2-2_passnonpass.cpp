#include <iostream>
using namespace std;

int main()
{
	int p, s;
	cout << "필기점수 : ";
	cin >> p;
	cout << "실기점수 : ";
	cin >> s;

	double a = (p + s) / 2.0;

	/*
	if (p >= 70 && s >= 70)
	{
		cout << "----------------" << endl;
		cout << "평균 : " << a << endl;
		if (a >= 80)
		{
			cout << "판정 : 합격";
		}
		else
		{
			cout << "판정 : 불합격";
		}
	}
	else if (p < 70 || s < 70)
	{
		cout << "----------------" << endl;
		cout << "평균 : " << a << endl;
		if (a >= 80)
		{
			cout << "판정 : 과락";
		}
		else
		{
			cout << "판정 : 불합격";
		}
	}
	else
	{
		cout << "----------------" << endl;
		cout << "평균 : " << a << endl;
		cout << "판정 : 불합격";
	}
	*/

	if (a >= 80)
	{
		if (p >= 70 && s >= 70)
		{
			cout << "----------------" << endl;
			cout << "평균 : " << a << endl;
			cout << "판정 : 합격";
		}
		else
		{
			cout << "----------------" << endl;
			cout << "평균 : " << a << endl;
			cout << "판정 : 과락";
		}
	}
	else
	{
		cout << "----------------" << endl;
		cout << "평균 : " << a << endl;
		cout << "판정 : 불합격";
	}
}