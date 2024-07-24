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
		availableInk = d;
	}

	void showState()
	{
		cout << "( 남은 종이 : " << availableCount << "장, 남은 잉크 : " << availableInk << " )" << endl;
	}

	bool printInkjet(int pages)
	{
		//printedCount = pages;
		if (availableCount < pages)
		{
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
		if (availableInk < pages)
		{
			cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
		availableCount = availableCount - pages;
		availableInk = availableInk - pages;
		cout << pages << "장 출력하였습니다." << endl;
		showState();
		return true;
	}
};

int main()
{
	int pages;
	char cont;

	InkjetPrinter ip("HP", "Officejet V40", 7, 5);

	cout << "현재 설치 프린터는 다음과 같습니다." << endl;
	ip.showInfo();
	ip.showState();

	do
	{
		cout << "출력할 매수를 입력하세요 >> ";
		cin >> pages;
		ip.printInkjet(pages);

		cout << "\n출력을 계속할까요?(y/n) ";
		cin >> cont;
	} while (cont == 'y' || cont == 'Y');
}