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
	cout << "3���� �̸��� ��ȭ��ȣ�� �Է��ϼ���." << endl;
	Person* people = new Person[3];
	for (int i = 0;i < 3;i++)
	{
		string n;
		string t;
		cout << "��� " << i + 1 << " : ";
		cin >> n;
		cin >> t;
		people[i].set(n, t);
	}
	cout << "��� ����� �̸��� : ";
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
		cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���. : ";
		cin >> searchName;
		for (int i = 0;i < 3;i++)
		{
			if (people[i].getName() == searchName)
			{
				searchTel = people[i].getTel();
			}
		}
		cout << searchName << "�� ��ȭ��ȣ�� " << searchTel << "�Դϴ�." << endl;
		cout << "����Ͻðڽ��ϱ�?(y/n) : ";
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