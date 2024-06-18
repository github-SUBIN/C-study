#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle()
	{
		radius = 1;
		//cout << "생성자 실행 radius = " << radius << endl;
	}
	Circle(int r)
	{
		radius = r;
		//cout << "생성자 실행 radius = " << radius << endl;
	}
	~Circle()
	{
		//cout << "소멸자 실행 radius = " << radius << endl;
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
	int n;
	cout << "생성할 원의 개수 >> ";
	cin >> n;

	Circle* circles = new Circle[n];

	for (int i = 0;i < n;i++)
	{
		int r;
		cout << "원 " << i + 1 << "의 반지름 : ";
		cin >> r;
		circles[i].setRadius(r);
	}

	for (int i = 0;i < n;i++)
	{
		cout << "원 " << i + 1 << "의 면적 : " << (circles + i)->getArea() << endl;
	}

	int num = 0;
	for (int i = 0;i < n;i++)
	{
		if (circles[i].getArea() > 100 && circles[i].getArea() < 200)
		{
			num++;
		}
	}

	cout << "면적이 100 ~ 200인 원의 개수는 " << num << "개 입니다." << endl;

	delete[] circles;
}