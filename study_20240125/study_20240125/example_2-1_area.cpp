#include <iostream>
using namespace std;

int main()
{
	/*
	double r;
	cout << "���� �������� �Ǽ��� �Է��Ͻÿ� : ";
	cin >> r;

	cout << "���� �ѳ��� : " << 4 * r * r << "��" << endl;
	cout << "���� ���� : " << 4 * r * r * r / 3 << "��";
	*/

	int a, b, c;

	cout << "�ﰢ���� �� ���� ���̸� ������ �Է��Ͻÿ�." << endl;
	cout << "ù��° ���� ���� : ";
	cin >> a;
	cout << "�ι�° ���� ���� : ";
	cin >> b;
	cout << "����° ���� ���� : ";
	cin >> c;

	double s = (a + b + c) / 2;
	//double result = s*(s - a)*(s - b)*(s - c);

	cout << "�ﰢ���� ���� : " << sqrt(s * (s - a) * (s - b) * (s - c));

}