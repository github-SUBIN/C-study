#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name[5];

	for (int i = 0;i < 5;i++)
	{
		cout << "ÀÌ¸§ : ";
		getline(cin, name[i]);
	}


	for (int j = 0;j < 4;j++)
	{
		for (int i = 0;i<4-j;i++)
		{
			int index = (i + 1) % 5;
			if (name[i] > name[index])
			{
				string temp = name[i];
				name[i] = name[index];
				name[index] = temp;
			}
		}
	}


	for (int i = 0;i < 5;i++)
	{
		cout << name[i] << "  ";
	}
}
