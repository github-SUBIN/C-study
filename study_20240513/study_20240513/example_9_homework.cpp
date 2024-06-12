#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date()
	{
		year = month = day = 0;
	}
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}

	int getYear()
	{
		return year;
	}
	int getMonth()
	{
		return month;
	}
	int getDay()
	{
		return day;
	}
	void setYear(int y)
	{
		year = y;
	}
	void setMonth(int m)
	{
		month = m;
	}
	void setDay(int d)
	{
		day = d;
	}

	void print()
	{
		cout << year << "�� " << month << "�� " << day << "��" << endl;
	}
	string toText()
	{
		return to_string(year) + "�� " + to_string(month) + "�� " + to_string(day) + "��";
	}
	bool isLeapYear()
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0 && year % 400 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Date d1(2017, 9, 1);
	d1.print();
	if (d1.isLeapYear())
	{
		cout << d1.toText() << "�� �����Դϴ�." << endl;
	}
	else
	{
		cout << d1.toText() << "�� ������ �ƴմϴ�." << endl;
	}
}