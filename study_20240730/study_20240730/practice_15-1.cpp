#include <iostream>
using namespace std;

/*
int Max(int i, int j)
{
	return i > j ? i : j;
}

double Max(double i, double j)
{
	return i > j ? i : j;
}

char Max(char i, char j)
{
	return i > j ? i : j;
}
*/

template <class T> 
T Max(T i, T j)
{
	return i > j ? i : j; //?:는 조건연산자 이다. (조건식)? 표현식1:표현식2 -> 조건식이 참일 경우엔 표현식1을 선택(수행), 거짓인 경우에는 표현식2를 선택(수행)
}

template <class T1, class T2> 
void func(T1 x, T2 y)
{
	cout << x << " " << y << endl;
}

int main()
{
	func("kim", 30);
	func(20, 49.2);
}