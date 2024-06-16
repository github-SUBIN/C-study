#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();

	void setRadius(int r)
	{
		radius = r;
	}

	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

Circle::Circle()
{
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r)
{
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle()
{
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main()
{
	Circle* p;
	Circle* q;

	p = new Circle;
	q = new Circle(30);
	
	/*
	Circle* p = new Circle;
	Circle* q = new Circle(30);
	*/

	cout << "p area = " << p->getArea() << endl; //p가 가리키는 객체의 면적을 계산하고 출력
	cout << "q area = " << q->getArea() << endl; //q가 가리키는 객체의 면적을 계산하고 출력

	delete p; //p가 가리키는 객체를 메모리에서 해제하고, 소멸자를 호출
	delete q; //q가 가리키는 객체를 메모리에서 해제하고, 소멸자를 호출
	//delete 연산자는 new로 동적 할당된 메모리를 해제하며, 이 과정에서 해당 객체의 소멸자가 자동으로 호출된다.
	//클래스에서 소멸자를 정의하지 않더라도, 컴파일러는 기본 소멸자를 자동으로 제공한다. 기본 소멸자는 클래스에 정의된 모든 멤버 변수들을 순차적으로 소멸시킨다.
	//기본 소멸자는 특별한 작없 없이 객체를 삭제함
	//기본 소멸자는 멤버 변수가 기본 자료형이기 때문에 별다른 추가 작업 없이 메모리를 헤제함.
	//추가적인 소멸자 메시지 출력은 없지만, 메모리는 정상적으로 해제됨.
	//그러나 소멸자가 필요한 상황 - 클래스가 동적 할당된 메모리를 소유하고 있는 경우, 클래스가 파일이나 네트워크 소켓 등의 리소스를 소유하고 있는 경우, 기타 특정한 정리 작업이 필요한 경우
}