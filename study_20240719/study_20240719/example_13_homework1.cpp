#include <iostream>
using namespace std;

class BasePrinter
{
protected:
	string manufacturer;
	string model;
	int printedCount;
	int availableCount;
	

public:
	/*
	string manufacturer;
	string model;
	int printedCount;
	int availableCount;
	*/

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
		availableInk = d;
	}

	void showState()
	{
		cout << "( ���� ���� : " << availableCount << "��, ���� ��ũ : " << availableInk << " )" << endl;
	}

	bool printInkjet(int pages)
	{
		//printedCount = pages;
		if (availableCount < pages)
		{
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			return false;
		}
		if (availableInk < pages)
		{
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			return false;
		}
		availableCount = availableCount - pages;
		availableInk = availableInk - pages;
		cout << pages << "�� ����Ͽ����ϴ�." << endl;
		showState();
		return true;
	}
};

int main()
{
	int pages;
	char cont;

	InkjetPrinter ip("HP", "Officejet V40", 7, 5);

	cout << "���� ��ġ �����ʹ� ������ �����ϴ�." << endl;
	ip.showInfo();
	ip.showState();

	do
	{
		cout << "����� �ż��� �Է��ϼ��� >> ";
		cin >> pages;
		ip.printInkjet(pages);

		cout << "\n����� ����ұ��?(y/n) ";
		cin >> cont;
	} while (cont == 'y' || cont == 'Y');
}