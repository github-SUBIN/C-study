#include <iostream>
using namespace std;

int main()
{
	int x1, x2, x3;

	cout << "���� �ٸ� ������ ���� �Է��Ͻÿ�." << endl;
	cout << "ù��° ���� : ";
	cin >> x1;
	cout << "�ι�° ���� : ";
	cin >> x2;
	cout << "����° ���� : ";
	cin >> x3;

	int large;

	if (x1 >= x2 && x1>=x3)
	{
		cout << "���� ū ���� " << x1 << "�Դϴ�.";
	}
	else if (x2 >= x1 && x2 >= x3)
	{
		cout << "���� ū ���� " << x1 << "�Դϴ�.";
	}
	else
	{
		cout << "���� ū ���� " << x3 << "�Դϴ�.";
	}
}