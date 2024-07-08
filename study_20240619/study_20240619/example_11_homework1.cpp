#include <iostream>
using namespace std;

class Person
{
	string name;
	int age;

public:
	Person(string n, int i = 1)
	{
		name = n;
		age = i;
	}

	void show()
	{
		cout << name << " " << age << "¼¼" << endl;
	}
};

int main()
{
	Person grace("Grace"), ashley("Ashely", 8), helen("Helen", 13);
	grace.show();
	ashley.show();
	helen.show();
}