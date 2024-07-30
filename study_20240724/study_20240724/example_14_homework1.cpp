#include <iostream>
using namespace std;

class Converter
{
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio)
	{
		this->ratio = ratio;
	}
	void run()
	{
		double src;
		cout << getSourceString() << "을(를) " << getDestString() << "로 바꿉니다.";
		cout << getSourceString() << "을(를) 입력하세요 >> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile :public Converter
{
public:
	KmToMile(double ratio) : Converter(ratio)
	{
		//this->ratio = ratio;
		//이건 Converter 생성자에서 처리되므로 불필요하다.
	}
	double convert(double src)
	{
		return src / ratio;
	}

	string getSourceString()
	{
		return "킬로미터";
	}

	string getDestString()
	{
		return "마일";
	}
};

int main()
{
	KmToMile toMile(1.609344);

	toMile.run();

}