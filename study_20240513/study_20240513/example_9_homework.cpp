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
		cout << year << "년 " << month << "월 " << day << "일" << endl;
	}
	string toText()
	{
		return to_string(year) + "년 " + to_string(month) + "월 " + to_string(day) + "일";
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
		cout << d1.toText() << "는 윤년입니다." << endl;
	}
	else
	{
		cout << d1.toText() << "은 윤년이 아닙니다." << endl;
	}
}