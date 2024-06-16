#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "입력할 정수의 개수는? : ";
	cin >> n;

	if (n <= 0)
	{
		cout << "0보다 큰 양수로 입력하세요.";
		return 0;
	}

	int* p = new int[n]; //n개의 정수 배열 동적 할당
	//배열은 동적 할당 시 초기화 불가능!! (데이터타입* 포인터변수 = new 데이터타입(초기값) 은 초기화 가능임)
	//int *p = new int(20) 이렇게 int 타입 할당은 초기화 가능!

	if (!p)
	{
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0;i < n;i++)
	{
		cout << i + 1 << "번째 정수 >> ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += p[i];
	}
	cout << "평균 = " << (double)sum / n << endl;

	delete[] p; //배열일때 [] 붙이는거 잊지 말기, 배열 아닐때 []붙이면 안됨 - 둘다 오류는 아닌데 비정상적 반환
}