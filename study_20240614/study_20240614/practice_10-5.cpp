#include <iostream>
using namespace std;

int main()
{
	int* p;

	p = new int;//int Ÿ�� 1�� �Ҵ�

	//p�� null�̸� �޸� �Ҵ� ���� - �� ������ �޸� �Ҵ� �����ؼ� p�� 0�̸� �� ���� ����ϴ°�?
	if (!p)
	{
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}
	
	*p = 5; //�Ҵ� ���� ���� ������ 5 ����
	int n = *p;

	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p; //�Ҵ� ���� �޸� ��ȯ
}