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
			cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
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
		cout << "������ : " << manufacturer << ", �𵨸� : " << model << endl;
	}

	void showAvailable()
	{
		cout << "(���� ���� : " << availableCount << "��,";
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