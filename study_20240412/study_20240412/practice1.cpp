#include <iostream>
using namespace std;

//기울기와 y절편 계산

int get_line(int a, int b, int c, int d, double* p, double* q) //입력된 s와 y의 주소를 저장할 포인터 변수
{
	if (a == c)
	{
		return -1; //x좌표가 서로 같으면 기울기 측정 불가
	}
	else
	{
		*p = (double)(b - d) / (double)(a - c); //기울기 y증가량/x증가량 값을 p의 주소에 저장
		*q = b - (*p) * a; //(a,b)를 기준으로 한 y절편 구하는 공식 값을 q의 주소에 저장
	}
}

int main()
{
	int x1, y1, x2, y2; //4개의 좌표 값 입력
	double s, y; //기울기와 y좌표가 들어갈 메모리 double로 확보
	cout << "x1 : ";
	cin >> x1;
	cout << "y1 : ";
	cin >> y1;
	cout << "x2 : ";
	cin >> x2;
	cout << "y2 : ";
	cin >> y2;

	if (get_line(x1, y1, x2, y2, &s, &y) == -1) //s와 y의 주소를 get_line함수에 입력
	{
		cout << "기울기를 구할 수 없습니다." << endl;
	}
	else
	{
		cout << "기울기 : " << s << "\ny절편 : " << y << endl;
	}


}