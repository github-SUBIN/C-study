#include <iostream>
using namespace std;

template <class T>
void print(T a[], int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << a[i] << "    ";
	}
	cout << endl;
}

/*
T print(T a[], T size)라고 하면 안된다.
위처럼 작성하면 print 함수가 T타입을 반환하도록 되어 있다는 뜻이다. 
이는 print 함수가 반환값을 기대한다는 의미라서 반환값을 적어야 하지만, 함수 본문에서는 반환값이 없다.
따라서 타입과 반환문이 일치하지 않아서 반환값에 대한 오류가 뜨는 것이다.

반환값이 없는 함수로 정의하고 싶다면, void를 반환 타입으로 명시해야 한다. 
*/



int main()
{
	int x[] = { 1,2,3,4,5 };
	print(x, 5); //print() 템플릿의 T가 int 타입으로 구체화

	double d[] = { 1.1,2.2,3.3,4.4,5.5 };
	print(d, 5); //print() 템플릿의 T가 double 타입으로 구체화

	char c[] = { 1,2,3,4,5 }; 
	print(c, 5); //print() 템플리의 T가 char 타입으로 구체화
}

//T가 char로 구체화 되는 경우, 정수 대신 문자가 출력되는 문제 발생!