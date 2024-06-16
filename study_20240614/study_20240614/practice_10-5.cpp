#include <iostream>
using namespace std;

int main()
{
	int* p;

	p = new int;//int 타입 1개 할당

	//p가 null이면 메모리 할당 실패 - 내 생각에 메모리 할당 실패해서 p가 0이면 이 문구 출력하는거?
	if (!p)
	{
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	
	*p = 5; //할당 받은 정수 공간에 5 삽입
	int n = *p;

	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p; //할당 받은 메모리 반환
}