#include <iostream>
using namespace std;

int main()
{
	int now;
	int candy;

	cout << "���� ������ �ִ� �� : ";
	cin >> now;
	cout << "ĵ���� ���� : ";
	cin >> candy;

	cout << "�ִ�� �� �� �ִ� ĵ���� ���� : " << now / candy << endl;
	cout << "ĵ�� ���� �� ���� �� : " << now - candy * (now / candy);

}