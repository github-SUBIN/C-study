#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int num = 53;
	int ent;

	cout << "---- 50�� 60 ������ �����Դϴ�. ----" << endl;

	do
	{
		cout << "������ ������ ������ : ";
		cin >> ent;
		if(ent < num)
		{
			i++;
			cout << ent << "���� �� ū ���Դϴ�." << endl;
		}
		else if (ent > num)
		{
			i++;
			cout << ent << "���� �� ���� ���Դϴ�." << endl;
		}
		else
		{
			i++;
			cout << "�����մϴ�. �����Դϴ�." << endl;
			cout << i << "�� �õ����� ���߾����ϴ�." << endl;
			//break; //do-while�� ����� ���� �ʿ����

		}
	} while (ent != num);
	//while (ent != num);
	//while (50 <= ent <= 60); //�̰� �ƴ� ent�� 50���� ���� �� �Է��ص� �ȳ���
}