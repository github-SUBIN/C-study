#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "�ֹε�Ϲ�ȣ�� -���� 14�ڸ��� �Է��Ͻÿ� : ";
	string idnumber;
	getline(cin, idnumber);
	
	cout << "�ֹε�Ϲ�ȣ : " << idnumber << endl;
	if (idnumber.length() >= 15)
	{
		cout << "�߸��� �Է��Դϴ�. 14�ڸ��� �Է��ϼ���.";
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
			cout << "�߸��� �Է��Դϴ�.";
		}
		else if (divnum == 1 || divnum == 3)
		{
			cout << "�����Դϴ�.";
		}
		else
		{
			cout << "�����Դϴ�.";
		}
	}
}