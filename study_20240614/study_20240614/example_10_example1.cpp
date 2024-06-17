#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle()
	{
		radius = 1;
		cout << "생성자 실행 radius = " << radius << endl;
	}
	Circle(int r)
	{
		radius = r;
		cout << "생성자 실행 radius = " << radius << endl;
	}
	~Circle()
	{
		cout << "소멸자 실행 radius = " << radius << endl;
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
	int r = 0;
	while (r >= 0)
	{
		cout << "원의 반지름을 입력하시오(음수를 입력하면 종료됩니다.) : ";
		cin >> r;
		if (r < 0)
		{
			return 0;
		}
		else
		{
			Circle* circle = new Circle(r);
			cout << "원의 넓이는 : " << circle->getArea() << "입니다." << endl;
			delete circle;
		}
	}
}