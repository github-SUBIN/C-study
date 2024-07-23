#include <iostream>
using namespace std;

class BasePrinter
{
	string manufacturer;
	string model;
	int printedCount;
	int availableCount;

public:
	BasePrinter(string a, string b, int c)
	{
		manufacturer = a;
		model = b;
		availableCount = c;
	}

	bool print(int pages)
	{
		//printedCount = pages;
		if (availableCount < pages)
		{
			cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
			return false;
		}
		else
		{
			availableCount = availableCount - pages;
			return true;
		}
	}

	void showInfo()
	{
		cout << "제조사 : " << manufacturer << ", 모델명 : " << model << endl;
	}

	void showAvailable()
	{
		cout << "(남은 용지 : " << availableCount << "장,";
	}
};

class InkjetPrinter :public BasePrinter
{
	int availableInk;

public:
	InkjetPrinter(string a, string b, int c, int d) : BasePrinter(a, b, c)
	{
		
	}
};