#include <iostream>
using namespace std;

//내가 연습해본 클래스 타입의 메모리 동적 할당
class Circle
{
	int radius;

public:
	Circle()
	{
		radius = 1;
	}
	Circle(int r)
	{
		radius = r;
	}
	double getArea()
	{
		return 3.14 * radius * radius;
	}
	void setRadius(int r)
	{
		radius = r;
	}
};

int main()
{
	
	Circle* p; //Circle 클래스의 포인터 p를 선언
	p = new Circle; //기본 생성자를 호출하여 Circle 객체를 동적으로 할당하고, 포인터 p가 이를 가리키게 함
	*p = Circle(10); //매개변수 생성자를 호출하여 반지름이 10인 새로운 Circle 객체를 생성하고, 이를 p가 가리키는 객체에 할당
	
	//1. Circle* p; : 'Circle' 클래스 타입의 포인터 p를 선언한다. 이 시점에서 p는 어떤 유효한 주소도 가리키지 않는다.
	//2. p = new Circle; : 기본 생성자를 사용하여 Circle 객체를 동적으로 생성하고, 그 주소를 p에 할당한다. 이제 p는 radius가 1인 Circle 객체를 가리킨다.
	//3. *p = Circle(10); : 매개변수 생성자를 호출하여 반지름이 10인 임시 Circle 객체를 생성하고, 그 객체를 *p에 대입힌다. 
	//이 대입 연산자는 기본 제공 복사 대입 연산자를 사용하게 된다.
	//이 과정에서 p가 가리키는 Circle 객체의 radius가 10으로 변경된다.

	//Circle* p = new Circle(10);
	//매개변수 생성자를 사용하여 반지름이 10인 Circle 객체를 동적으로 생성하고, 그 주소를 p에 할당. 이 시점에서 p는 radius가 10인 Circle 객체를 가리킨다.

	//위 두개의 차이점 
	//1. 객체 생성 방식
	//첫번째 코드는 기본 생성자로 객체를 생성한 후, 그 객체를 매개변수 생성자를 사용하여 덮어씌운다.
	//두번째 코드는 처음부터 매개변수 생성자를 사용하여 객체를 생성한다.
	//2. 성능 및 효율성
	//첫번재 코드에서는 Circle 객체가 두번 생성된다. 한번은 기본 생성자로, 한번은 매개변수 생성자로. 그 후 대입 연산자가 호출된다.
	//두번째 코드는 객체를 한번만 생성한다. 따라서 더 효율적이다.
	//3. 코드 간결성
	//두 코드의 실행 결과는 동일하다. 그러나 객체를 처음부터 원하는 상태로 생성하는 두번째 코드가 더 간결하고 읽기 쉽다.


	cout << p->getArea() << endl; //p가 가리키는 Circle 객체의 면적을 계산하고 출력
	(*p).setRadius(2);
	cout << p->getArea() << endl;

	delete p; //delete는 동적할당에서만 한번만 사용가능. 정적할당에서 사용하면 실행 시간 오류. 동적에서 두번해도 실행 시간 오류
}