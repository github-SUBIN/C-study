#include <iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "x��ǥ : ";
	cin >> x;
	cout << "y��ǥ : ";
	cin >> y;

	if (x > 0 && y > 0)
	{
		cout << "(" << x << "," << y << ")�� 1��и�";
	}
	else if (x > 0 && y < 0)
	{
		cout << "(" << x << "," << y << ")�� 4��и�";
	}
	else if (x < 0 && y > 0)
	{
		cout << "(" << x << "," << y << ")�� 2��и�";
	}
	else if (x < 0 && y < 0)
	{
		cout << "(" << x << "," << y << ")�� 3��и�";
	}
	else
	{
		cout << "(" << x << "," << y << ")�� ��";
	}
}