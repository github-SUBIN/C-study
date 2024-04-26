#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "여러줄의 영문 문자열을 입력하시오. 입력을 종료하려면 &을 입력하시오." << endl;
	string s;
	getline(cin, s, '&');
	cin.ignore();

	string f, r;
	cout << "find : ";
	cin >> f;
	cout << "replace : ";
	cin >> r;

	int startpoint = 0;
	while (true)
	{
		int findnum = s.find(f, startpoint);
		if (findnum == -1)
		{
			break;
		}
		s.replace(findnum, f.length(), r);
		startpoint = findnum + 1;
	}

	cout << s;
}