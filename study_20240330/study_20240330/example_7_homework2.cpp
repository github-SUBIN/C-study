#include <iostream>
using namespace std;

bool posTriangle(int a, int b, int c)
{
	if (a + b > c && b + c > a && c + a > b)
	{
		return true;
	}
	return false;
	
}

int main()
{
	int a, b, c;
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	cout << "c : ";
	cin >> c;
	cout << "-------------------------------------" << endl;

	if (posTriangle(a,b,c))
	{
		cout << a << ", " << b << ", " << c << "�� �ﰢ���� ����� ���ϴ�.";
	}
	else
	{
		cout << a << ", " << b << ", " << c << "�� �ﰢ���� ��������� �ʽ��ϴ�.";
	}
}