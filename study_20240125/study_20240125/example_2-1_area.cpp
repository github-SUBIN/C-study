#include <iostream>
using namespace std;

int main()
{
	/*
	double r;
	cout << "구의 반지름을 실수로 입력하시오 : ";
	cin >> r;

	cout << "구의 겉넓이 : " << 4 * r * r << "ㅠ" << endl;
	cout << "구의 부피 : " << 4 * r * r * r / 3 << "ㅠ";
	*/

	int a, b, c;

	cout << "삼각형의 세 변의 길이를 정수로 입력하시오." << endl;
	cout << "첫번째 변의 길이 : ";
	cin >> a;
	cout << "두번째 변의 길이 : ";
	cin >> b;
	cout << "세번째 변의 길이 : ";
	cin >> c;

	double s = (a + b + c) / 2;
	//double result = s*(s - a)*(s - b)*(s - c);

	cout << "삼각형의 넓이 : " << sqrt(s * (s - a) * (s - b) * (s - c));

}