#include <iostream>
using namespace std;

class Person
{
	string name;
	string tel;
public:
	Person();
	string getName()
	{
		return name;
	}
	string getTel()
	{
		return tel;
	}
	void set(string name, string tel);
};

Person::Person()
{
	name = "";
	tel = "";
}

void Person::set(string name, string tel)
{
	this->name = name;
	this->tel = tel;
}

int main()
{
	cout << "3명의 이름과 전화번호를 입력하세요." << endl;
	Person* people = new Person[3];
	for (int i = 0;i < 3;i++)
	{
		string n;
		string t;
		cout << "사람 " << i + 1 << " : ";
		cin >> n;
		cin >> t;
		people[i].set(n, t);
	}
	cout << "모든 사람의 이름은 : ";
	for (int i = 0;i < 3;i++)
	{
		cout << people[i].getName() << "  ";
	}
	cout << endl;
	cout << "****************************************" << endl;
	bool yn = 1;
	while (yn = 1)
	{
		string searchName;
		string searchTel;
		char yynn;
		cout << "전화번호를 검색합니다. 이름을 입력하세요. : ";
		cin >> searchName;
		for (int i = 0;i < 3;i++)
		{
			if (people[i].getName() == searchName)
			{
				searchTel = people[i].getTel();
			}
		}
		cout << searchName << "의 전화번호는 " << searchTel << "입니다." << endl;
		cout << "계속하시겠습니까?(y/n) : ";
		cin >> yynn;
		if (yynn == 'y')
		{
			yn = 1;
		}
		else if (yynn == 'n')
		{
			yn = 0;
			return 0;
		}
	}
}