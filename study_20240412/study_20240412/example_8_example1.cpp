#include <iostream>
using namespace std;

int main()
{
	int n[10], i; //정수 배열
	int* p; //주소를 저장하는 변수

	for (i = 0;i < 10;i++)
	{
		*(n + i) = i * 3; //n[i]에 3의 배수를 저장 = (n시작주소+i)의 주소의 값 넣는곳에 3의 배수를 넣음
	}

	p = n; //주소를 넣는 변수p에 배열n의 시작주소를 넣음
	
	for (i = 0;i < 10;i++)
	{
		cout << *(p + i) << "  ";
		//p[i]
		//n[i]
		//*(n+i) 다 가능
	}

	cout << endl;

	for (i = 0;i < 10;i++)
	{
		*p = *p + 2; //주소가 들어있는p의 값 부분에 값+2를 한것을 넣는다
		p++; //포인터를 배열처럼 썼으니 다음 원소의 주소로 이동
	}

	for (i = 0;i < 10;i++)
	{
		cout << n[i] << "  ";
	}
}