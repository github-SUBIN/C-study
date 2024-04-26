#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int num = 53;
	int ent;

	cout << "---- 50과 60 사이의 정수입니다. ----" << endl;

	do
	{
		cout << "정답을 추측해 보세요 : ";
		cin >> ent;
		if(ent < num)
		{
			i++;
			cout << ent << "보다 더 큰 수입니다." << endl;
		}
		else if (ent > num)
		{
			i++;
			cout << ent << "보다 더 작은 수입니다." << endl;
		}
		else
		{
			i++;
			cout << "축하합니다. 정답입니다." << endl;
			cout << i << "번 시도만에 맞추었습니다." << endl;
			//break; //do-while문 제대로 쓰면 필요없음

		}
	} while (ent != num);
	//while (ent != num);
	//while (50 <= ent <= 60); //이거 아님 ent에 50보다 작은 수 입력해도 안끝남
}