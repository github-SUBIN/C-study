#include <iostream>
#include <string>
using namespace std;

//다시다싣사디사디다닫시다시닷디사

int main()
{
	cout << "7+23+5+100+25와 같이 덧셈식을 입력하세요." << endl;
	string s;
	cout << "덧셈식 : ";
	getline(cin, s);
	
	int sum = 0;
	int number = 0;

	string part;

	while (1)
	{
		int w = s.find('+', number);
		if (w == -1)
		{
			part = s.substr(number);
			if (part == "")
			{
				break;
			}
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int cnt = w - number;
		string part = s.substr(number, cnt);
		cout << part << endl;
		sum += stoi(part);
		number = w + 1;
	}
	cout << "숫자들의 합은 : " << sum << "입니다.\n";

	/*
	for (int i = 0;i < s.length();i++)
	{
		if (s[i] == '+')
		{
			cout << "\n";
			i++;
		}
		cout << s[i];
		
	}
	*/


}