#include <iostream>
using namespace std;

int main()
{
	//random이라는 이름의 배열 생성하고 100개 칸 안에 0을 채움
	int random[100] = { 0 };

	//random 배열 안에 0~100까지 랜덤한 정수 입력 후 출력
	for (int i = 0;i < sizeof(random) / sizeof(random[0]);i++)
	{
		random[i] = rand() % 101;
		//random[i] = srand(time(0));
		cout << random[i] << "  ";
	}

	cout << endl;
	cout << endl;

	//int a = 0;
	
	/*
	//1. random 배열 하나씩 다 비교 - 비교해서 더 큰수로 바꿔치기 함 - 배열에 더 큰수로 다시 입력
	for (a ;a < 99;a++)
	{
		if (random[a] >= random[a + 1])
		{
			random[a + 1] = random[a];
		}

		else
		{
			random[a] = random[a + 1];
		}
	}
	*/
	
	/*
	//2. 더 큰수를 오른쪽으로 바꾸는 반복문
	for (int a = 0;a < 99;a++)
	{
		if (random[a] > random[a + 1])
		{
			//버블정렬
			int temp = random[a];
			random[a] = random[a + 1];
			random[a + 1] = temp;
		}
	}
	*/

	//3, 더 큰수를 오른쪽으로 바꿔 작은수부터 큰수까지 완벽하게 재배열되는 반복문
	for (int i = 0; i < sizeof(random) / sizeof(random[0]) - 1; i++) {
		for (int j = 0; j < sizeof(random) / sizeof(random[0]) - i - 1; j++) {
			if (random[j] > random[j + 1]) {
				int temp = random[j];
				random[j] = random[j + 1];
				random[j + 1] = temp;
			}
		}
	}

	cout << endl;
	cout << endl;

	//바꿔치기 한 배열 출력해봄
	for (int i = 0;i < sizeof(random) / sizeof(random[0]);i++)
	{
		cout << random[i] << "  ";
	}

	cout << endl;
	cout << endl;

	//바꿔치기 제대로 일어났다면 배열의 제일 마지막 위치의 값 출력했을때 가장 큰수로 나올것임
	cout << "배열 중 최댓값 : " << random[99];

	return 0;
	
}


/*
#include <iostream>
#include <cstdlib> // rand 함수를 사용하기 위한 헤더
#include <ctime>   // time 함수를 사용하기 위한 헤더
using namespace std;

int main()
{
	// 난수 생성기를 초기화합니다.
	srand(static_cast<unsigned int>(time(0)));

	const int SIZE = 100;
	int random[SIZE] = { 0 };

	// 배열에 랜덤한 값을 채웁니다.
	for (int i = 0; i < SIZE; ++i)
	{
		random[i] = rand() % 101;
		cout << random[i] << "  ";
	}
	cout << endl << endl;

	// 버블 정렬 알고리즘을 사용하여 배열을 정렬합니다.
	for (int i = 0; i < SIZE - 1; ++i)
	{
		for (int j = 0; j < SIZE - 1 - i; ++j)
		{
			if (random[j] > random[j + 1])
			{
				int temp = random[j];
				random[j] = random[j + 1];
				random[j + 1] = temp;
			}
		}
	}

	// 정렬된 배열을 출력합니다.
	for (int i = 0; i < SIZE; ++i)
	{
		cout << random[i] << "  ";
	}
	cout << endl << endl;

	// 최댓값 출력
	int maxIndex = SIZE - 1;
	cout << "배열 중 최댓값 : " << random[maxIndex] << endl;

	return 0;
}
*/
