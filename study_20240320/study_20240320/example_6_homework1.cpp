#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "주민등록번호를 -포함 14자리로 입력하시오 : ";
	string idnumber;
	getline(cin, idnumber);
	
	cout << "주민등록번호 : " << idnumber << endl;
	if (idnumber.length() >= 15)
	{
		cout << "잘못된 입력입니다. 14자리로 입력하세요.";
	}
	else
	{
		/*
		char a = idnumber[7];
		int divnum = a - '0';
		*/

		string s = idnumber.substr(7, 1);
		int divnum = stoi(s);
		cout << divnum << endl;

		if (divnum <= 0 || divnum > 4)
		{
			cout << "잘못된 입력입니다.";
		}
		else if (divnum == 1 || divnum == 3)
		{
			cout << "남성입니다.";
		}
		else
		{
			cout << "여성입니다.";
		}
	}
}