#include <iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "x좌표 : ";
	cin >> x;
	cout << "y좌표 : ";
	cin >> y;

	if (x > 0 && y > 0)
	{
		cout << "(" << x << "," << y << ")는 1사분면";
	}
	else if (x > 0 && y < 0)
	{
		cout << "(" << x << "," << y << ")는 4사분면";
	}
	else if (x < 0 && y > 0)
	{
		cout << "(" << x << "," << y << ")는 2사분면";
	}
	else if (x < 0 && y < 0)
	{
		cout << "(" << x << "," << y << ")는 3사분면";
	}
	else
	{
		cout << "(" << x << "," << y << ")는 축";
	}
}