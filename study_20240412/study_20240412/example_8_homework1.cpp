#include <iostream>
using namespace std;

int get_gcd_lcm(int c, int d, int* g, int* l)
{
	//최대공약수 구하기
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

	//최소공배수 구하기
	*l = (c / *g) * (d / *g) * *g;

	return 0;
}

int main()
{
	cout << "두개의 정수를 입력하시오" << endl;
	int a;
	int b;
	cin >> a;
	cin >> b;

	//함수 하나로 두개의 값을 도출하기 위해서 사용하는 변수들
	int gcd;
	int lcm;

	//함수 하나로 두개의 값을 도출하기 위해서 포인터 사용하기
	get_gcd_lcm(a, b, &gcd, &lcm);
	cout << "최대공약수 : " << gcd << "\n" << "최소공배수 : " << lcm << endl;
	
}


/*
#include <iostream>

// 최대공약수와 최소공배수를 반환하는 함수
void get_gcd_lcm(int num1, int num2, int* gcd, int* lcm) {
	int a = num1;
	int b = num2;

	// 최대공약수 계산 - 유클리드 호제법
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	*gcd = a;

	// 최소공배수 계산
	*lcm = (num1 * num2) / *gcd;
}

int main() {
	int num1, num2;
	std::cout << "두 개의 정수를 입력하세요: ";
	std::cin >> num1 >> num2;

	int gcd, lcm;
	get_gcd_lcm(num1, num2, &gcd, &lcm);

	std::cout << "최대공약수: " << gcd << std::endl;
	std::cout << "최소공배수: " << lcm << std::endl;

	return 0;
}
*/