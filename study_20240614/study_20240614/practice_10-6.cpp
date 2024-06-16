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

	cout << p->getArea() << endl; //p가 가리키는 Circle 객체의 면적을 계산하고 출력
	(*p).setRadius(2);
	cout << p->getArea() << endl;

	delete p; //delete는 동적할당에서만 한번만 사용가능. 정적할당에서 사용하면 실행 시간 오류. 동적에서 두번해도 실행 시간 오류
}