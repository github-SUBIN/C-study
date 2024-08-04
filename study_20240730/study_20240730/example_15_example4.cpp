#include <iostream>
using namespace std;

/*
* 이건 포인터를 사용하는 방법으로 c와 c++에서 모두 사용 가능하다.
void myswap(int* pa, int* pb) //int형 변수의 주소를 가리키는 포인터
{
	int tmp;
	tmp = *pa; //*pa는 포인터 pa가 가리키는 주소에 있는 실제 값을 의미함. pa가 가리키는 값을 tmp에 저장
	*pa = *pb; //pd가 가리키는 값을 pa가 가리키는 주소에 저장
	*pb = tmp; //tmp에 저장된 값을 *pd에 대입. 즉 pb가 가리키는 변수에 tmp 값을 대입
}

int main()
{
	int a = 2;
	int b = 5;
	cout << "before : a = " << a << ", b = " << b << endl;
	myswap(&a, &b); //&a는 변수 a의 주소를 의미, &b는 변수 b의 주소를 의미한다.
	cout << "after : a = " << a << ", b = " << b << endl;
}

//포인터를 사용한 함수 호출 : myswap함수는 두개의 int형 포인터를 매개변수로 받는다. 함수 호출 시 변수 a와 b의 주소를 넘겨준다 &a,&b
//간접 참조 : 함수 내에서 포인터 pa와 pb를 통해 해당 주소에 저장된 실제 값을 접근한다. *pa, *pb는 a와 b 값을 의미
//장점 : 포인터를 사용하여 변수의 주소를 직접 다룸으로써 함수가 원본 변수의 값을 변경할 수 있다.
*/

/*
//이건 참조자(reference)를 사용하는 방법으로 c++에서만 사용 가능하다.
void myswap(int& ra, int& rb)
{
	int tmp;
	tmp = ra;
	ra = rb;
	rb = tmp;
}

int main()
{
	int a = 2;
	int b = 5;
	cout << "before : a = " << a << ", b = " << b << endl;
	myswap(a, b);
	cout << "after : a = " << a << ", b = " << b << endl;
}
*/

//참조자 : 할당된 하나의 메모리 공간에 다른 이름을 붙이는 것. 쉽게 말하면 별명.
// int num1=10;
// int &num2=num1;
// cout<<num1<<endl;
// cout<<num2<<endl;
// cout<<&num1<<endl;
// cout<<&num2<<endl;
// 이렇게 하면 10 10 주소값 주소값이 서로 같게 나온다. int로 선언해 메모리 공간에 num1이라는 이름이 붙어 있고 num1이라는 메모리 공간에 10이 선언되어있다.
// 여기서 num1이라는 메모리 공간에 다른 이름도 부여하고 싶다. num2라는 이름을 num1의 메모리 공간에 동시에 부여할 수 있다. 
//참조자를 사용한 함수 호출 : myswap함수는 두개의 int형 참조자를 매개변수로 받는다. 함수 호출 시 변수 a와 b를 직접 넘겨준다
//참조를 통해 접근 : 함수 내에서 참조자 ra와 rb는 각각 a와 b의 별칭이다. 따라서 ra와 rb는 a와 b 그 자체로 동작한다.
//장점 : 참조자를 사용하면 포인터와 관련된 문법적 복잡성을 줄일 수 있으며, 코드가 더 읽기 쉽고 직관적이다.


//위 두개의 코드 비교
//포인터 사용
//주소를 직접 넘겨주고, 함수 내에서 간접 참조 연산을 통해 값을 접근 및 수정
//함수 호출 시 & 연산자를 사용하여 변수의 주소를 전달
//코드가 덜 직관적이고 포인터 연산 관련 오류가 발생할 가능성 존재
//참조자 사용
//변수 자체를 넘겨주고, 함수 내에서 직접 접근 및 수정
//함수 호출 시 별도의 주소 연산자 없이 변수 자체를 전달
//코드가 직관적이며, 가독성이 높고 안전성 향상

//제네릭 함수
template <class T>
void myswap(T* a, T* b)
{
	T tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

}

//일반 함수
/*
void myswap(int* pa, int* pb)
{
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
*/


int main()
{
	int a = 2;
	int b = 5;
	cout << "before : a = " << a << ", b = " << b << endl;
	myswap(&a, &b);
	cout << "after : a = " << a << ", b = " << b << endl;

	cout << endl;
	cout << "-----------------------------" << endl;
	cout << endl;

	double c = 2.3;
	double d = 4.9;
	cout << "before : c = " << c << ", d = " << d << endl;
	myswap(&c, &d);
	cout << "after : c = " << c << ", d = " << d << endl;

	cout << endl;
	cout << "------------------------------" << endl;
	cout << endl;

	char e = 'e';
	char f = 'f';
	cout << "before : e = " << e << ", f = " << f << endl;
	myswap(&e, &f);
	cout << "after : e = " << e << ", f = " << f << endl;

	cout << endl;
	cout << "------------------------------" << endl;
	cout << endl;

	string g = "first";
	string h = "second";
	cout << "before : g = " << g << ", h = " << h << endl;
	myswap(&g, &h);
	cout << "after : g = " << g << ", h = " << h << endl;

	return 0;
}

/*
여기서 템플릿을 사용하여 일반 함수 없이 제네릭 함수만으로 char 타입의 값을 교환할 수 있는 이유는
C++의 템플릿이 모든 타입에 대해 일반적인 코드를 작성할 수 있도록 해주기 때문이다. 
템플릿 함수는 함수가 호출될 때마다 제공된 타입에 맞게 인스턴스화된다.
템플릿 함수 myswap은 특정 타입 T에 대해 작동하며, 이 타입은 함수가 호출될 때 결정된다.
즉, 템플릿 함수를 사용할 때, C++ 컴파일러는 주어진 타입에 맞게 템플릿 함수를 인스턴스화하여 
각 타입에 대해 별도의 함수를 생성한다.
*/