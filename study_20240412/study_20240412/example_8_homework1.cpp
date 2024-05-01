#include <iostream>
using namespace std;

int get_gcd_lcm(int c, int d, int* g, int* l)
{
	//�ִ����� ���ϱ�
	if (c > d)
	{
		for (int i = 1;i <= d;i++)
		{
			if (c% i == 0 && d % i == 0)
			{
				*g = i;
			}
		}
	}
	else
	{
		for (int i = 1;i <= c;i++)
		{
			if (c % i == 0 && d % i == 0)
			{
				*g = i;
			}
		}
	}

	//�ּҰ���� ���ϱ�
	*l = (c / *g) * (d / *g) * *g;

	return 0;
}

int main()
{
	cout << "�ΰ��� ������ �Է��Ͻÿ�" << endl;
	int a;
	int b;
	cin >> a;
	cin >> b;

	//�Լ� �ϳ��� �ΰ��� ���� �����ϱ� ���ؼ� ����ϴ� ������
	int gcd;
	int lcm;

	//�Լ� �ϳ��� �ΰ��� ���� �����ϱ� ���ؼ� ������ ����ϱ�
	get_gcd_lcm(a, b, &gcd, &lcm);
	cout << "�ִ����� : " << gcd << "\n" << "�ּҰ���� : " << lcm << endl;
	
}


/*
#include <iostream>

// �ִ������� �ּҰ������ ��ȯ�ϴ� �Լ�
void get_gcd_lcm(int num1, int num2, int* gcd, int* lcm) {
	int a = num1;
	int b = num2;

	// �ִ����� ��� - ��Ŭ���� ȣ����
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	*gcd = a;

	// �ּҰ���� ���
	*lcm = (num1 * num2) / *gcd;
}

int main() {
	int num1, num2;
	std::cout << "�� ���� ������ �Է��ϼ���: ";
	std::cin >> num1 >> num2;

	int gcd, lcm;
	get_gcd_lcm(num1, num2, &gcd, &lcm);

	std::cout << "�ִ�����: " << gcd << std::endl;
	std::cout << "�ּҰ����: " << lcm << std::endl;

	return 0;
}
*/