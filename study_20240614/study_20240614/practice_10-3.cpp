#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle() //매개 변수 없는 생성자 없고 매개 변수 있는 생성자만 있는 상태에선 객체 배열도 호출 불가능. 무조건 매개 변수 없는 생성자 있어야 호출 가능
	{
		radius = 1;
	}
	Circle(int r) //아무 생성자도 없을땐 기본 생성자 자동으로 생성시켜 객체 배열 사용 가능
	{
		radius = r;
	}
	void setRadius(int r)
	{
		radius = r;
	}
	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle pizza;
	Circle waffle(10);
	Circle circleArray[3] = { Circle(),Circle(2),Circle(7) }; //생성자를 이용해 배열의 원소 초기화 이렇게 가능

	cout << "pizza : " << pizza.getArea() << endl;
	pizza.setRadius(5);
	cout << "new pizza : " << pizza.getArea() << endl;
	cout << "waffle : " << waffle.getArea() << endl;
	cout << "circle1 : " << circleArray[0].getArea() << endl;
	cout << "circle2 : " << circleArray[1].getArea() << endl;
	cout << "circle3 : " << circleArray[2].getArea() << endl;
}