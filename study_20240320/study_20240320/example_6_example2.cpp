#include <iostream>
#include <string>
using namespace std;

//�ٽôٽƻ����ٴݽôٽô���

int main()
{
	cout << "7+23+5+100+25�� ���� �������� �Է��ϼ���." << endl;
	string s;
	cout << "������ : ";
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
	cout << "���ڵ��� ���� : " << sum << "�Դϴ�.\n";

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