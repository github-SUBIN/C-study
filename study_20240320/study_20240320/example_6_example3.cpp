#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "�������� ���� ���ڿ��� �Է��Ͻÿ�. �Է��� �����Ϸ��� &�� �Է��Ͻÿ�." << endl;
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