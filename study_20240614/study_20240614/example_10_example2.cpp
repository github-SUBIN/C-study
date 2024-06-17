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
	Circle* circles = new Circle[3];

	circles[0].setRadius(10);
	circles[1].setRadius(20);
	circles[2].setRadius(30);

	for (int i = 0;i < 3;i++)
	{
		cout << circles[i].getArea() << endl;
	}
	/*
	//이렇게 하면 오류뜸. circles의 시작점을 for문에서 circles++로 옮겼기 때문에 delete 실행시 오류 발생
	for (int i = 0;i < 3;i++)
	{
		cout << circles->getArea() << endl;
		circles++;
	}

	delete[] circles;

	//이를 막기 위해서
	Circle* p =circles;
	for(int i=0;i<3;i++)
	{
	cout<<p->getArea()<<endl;
	p++
	}
	delete[] circles;
	//이렇게 하면 오류 안뜸!
	*/

	for (int i = 0;i < 3;i++)
	{
		cout << (circles + i)->getArea() << endl;
	}

	delete[] circles;
}