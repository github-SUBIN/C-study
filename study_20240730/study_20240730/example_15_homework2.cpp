#include <iostream>
using namespace std;

template <class T>
class Calc
{
	T n1, n2;

public:
	Calc(T nn1, T nn2)
	{
		n1 = nn1;
		n2 = nn2;
	}
	void print()
	{
		cout << "( " << n1 << " , " << n2 << " )" << "\t";
	}
	T add()
	{
		return n1 + n2;
	}
	T subtract()
	{
		return n1 - n2;
	}
	T multi()
	{
		return n1 * n2;
	}
	double divide()
	{
		if (n2 == 0)
		{
			return 0;
		}
		return (double)n1 / n2;
	}
};

int main()
{
	Calc<int> c1(4, 3);
	c1.print();
	cout << "add : " << c1.add() << endl;
	c1.print();
	cout << "subtract : " << c1.subtract() << endl;
	c1.print();
	cout << "multi : " << c1.multi() << endl;
	c1.print();
	cout << "divide : " << c1.divide() << endl;

	Calc<double> c2(2.4, 4.1);
	c2.print();
	cout << "add : " << c2.add() << endl;
	c2.print();
	cout << "subtract : " << c2.subtract() << endl;
	c2.print();
	cout << "multi : " << c2.multi() << endl;
	c2.print();
	cout << "divide : " << c2.divide() << endl;
}