#include <iostream>
using namespace std;

class Calculator //추상 클래스 : 순수 가상 함수를 포함하고 있는 추상 클래스. 이 클래스는 직접 인스턴스화 할 수 없으며, 이를 상속받는 클래스에서 모든 순수 가상 함수를 구현해야 한다.
{
public:
	virtual int add(int a, int b) = 0;
	virtual int subtract(int a, int b) = 0;
	virtual double average(int a[], int size) = 0;
};

class GoodCalc :public Calculator //GoodCalc은 Calculator 클래스를 상속받아 모든 가상 함수를 구현했다. 이제 GoodCalc은 인스턴스화 할 수 있ㄴ느 구체적인 클래스이다.
{
public:
	int add(int a, int b)
	{
		return a + b;
	}
	int subtract(int a, int b)
	{
		return a - b;
	}
	double average(int a[], int size)
	{
		int sum = 0;
		for (int i = 0;i < size;i++)
		{
			sum += a[i];
		}
		return sum / size;
	}
};

int main()
{
	int a[] = { 1,2,3,4,5 };
	Calculator* p = new GoodCalc();
	//GoodCalc 클래스의 인스턴스를 동적으로 생성한다.
	//GoodCalc 인스턴스의 포인터를 Calculator 클래스 타입의 포인터 p에 할당한다.
	//이는 다형성을 활용한 것이다. Calculator 타입의 포인터 p는 GoodCalc 객체를 가리키고 있지만, p를 통해 Calculator 클래스의 인터페이스를 사용하여 GoodCalc 클래스의 구현을 호출할 수 있다.

	cout << p->add(2, 3) << endl; //GodCalc 클래스의 add 함수를 호출
	cout << p->subtract(2, 3) << endl;
	cout << p->average(a, 5) << endl;

	delete p; //동적 할당된 메모리 해제 메모리 누수 방지
}
/*
이 코드는 객체 지향 프로그래밍의 다형성을 활용하여 추상 클래스를 통해 상속받은 클래스의 구현을 사용하는 에제.
Calculator 타입의 포인터 p를 통해 GoodCalc 객체의 함수를 호출함으로써 인터페이스와 구현을 분리하고, 코드 유연성 높임
*/

/*
Calculator 타입의 포인터 p가 어떻게 GoodCalc 객체의 함수를 호출할 수 있나?
이는 C++에서의 다형성 개념 덕분이다. 다형성은 상위 클래스 포인터가 하위 클래스 객첼르 가리킬 때, 하위 클래스의 적절한
함수가 호출되도록 하는 기능이다. 이를 가능하게 하는 핵심 요소는 가상함수 이다.

Calculator* p = new GoodCalc();
new GoodCalc()는 GoodCalc 객체를 동적으로 생성하고, p는 이 객체를 가리킨다. 
p는 Calculator 타입의 포인터이지만, 실제로는 GoodCalc 객체를 가리키고 있다.
*/