#include <iostream>
using namespace std;

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
	Circle circleArray[3]; //객체 배열 생성시 생성자로 호출하는데 매개 변수 없는 생성자로만 호출 가능
	Circle circle1(100); //circle1[3](10) 이런거 불가능

	cout << "첫번째 : " << circleArray[0].getArea() << endl;
	circleArray[1].setRadius(3);
	cout << "두번째 : " << circleArray[1].getArea() << endl;
	circleArray[2].setRadius(10);
	cout << "세번째 : " << circleArray[2].getArea() << endl;
	cout << "네번째 : " << circle1.getArea() << endl;
	circle1.setRadius(1);
	cout << "다섯번째 : " << circle1.getArea() << endl;
}