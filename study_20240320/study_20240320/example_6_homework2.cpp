#include <iostream>
using namespace std;

int main()
{
	string w;
	cout << "단어를 입력하시오 : ";
	cin >> w;
	string newword;
		//= w.substr(0, w.length());

	for (int i = w.length() - 1;i >= 0;i--)
	{
		newword += w[i];
	}

	cout << "반전된 단어 : " << newword << endl;

	int tf = 0;
	for (int a = 0;a < newword.length();a++)
	{
		if (newword[a] == w[a])
		{
			tf = 1;
		}
		else
		{
			tf = 0;
			break;
		}
	}

	if (tf == 1)
	{
		cout << w << " is palindrome!";
	}
	else
	{
		cout << w << " is not palindrome!";
	}
}