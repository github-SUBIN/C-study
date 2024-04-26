#include <iostream>
using namespace std;

int main()
{
	int now;
	int candy;

	cout << "현재 가지고 있는 돈 : ";
	cin >> now;
	cout << "캔디의 가격 : ";
	cin >> candy;

	cout << "최대로 살 수 있는 캔디의 개수 : " << now / candy << endl;
	cout << "캔디 구입 후 남은 돈 : " << now - candy * (now / candy);

}