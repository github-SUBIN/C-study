#include <iostream>
using namespace std;

//����� y���� ���

int get_line(int a, int b, int c, int d, double* p, double* q) //�Էµ� s�� y�� �ּҸ� ������ ������ ����
{
	if (a == c)
	{
		return -1; //x��ǥ�� ���� ������ ���� ���� �Ұ�
	}
	else
	{
		*p = (double)(b - d) / (double)(a - c); //���� y������/x������ ���� p�� �ּҿ� ����
		*q = b - (*p) * a; //(a,b)�� �������� �� y���� ���ϴ� ���� ���� q�� �ּҿ� ����
	}
}

int main()
{
	int x1, y1, x2, y2; //4���� ��ǥ �� �Է�
	double s, y; //����� y��ǥ�� �� �޸� double�� Ȯ��
	cout << "x1 : ";
	cin >> x1;
	cout << "y1 : ";
	cin >> y1;
	cout << "x2 : ";
	cin >> x2;
	cout << "y2 : ";
	cin >> y2;

	if (get_line(x1, y1, x2, y2, &s, &y) == -1) //s�� y�� �ּҸ� get_line�Լ��� �Է�
	{
		cout << "���⸦ ���� �� �����ϴ�." << endl;
	}
	else
	{
		cout << "���� : " << s << "\ny���� : " << y << endl;
	}


}