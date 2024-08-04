#include <iostream>
using namespace std;

/*
//이건 그냥 main함수만 보고 마음대로 작성한거 틀렸음!
template <class T>
class MyStack
{
	T a;
public:
	void push(T aa)
	{
		a = aa;
	}
	T pop()
	{
		return a;
	}
};
*/

template <class T>
class MyStack
{
	int tos; //top of stack
	T data[100]; //T 타입의 배열. 크기는 100
public:
	MyStack()
	{
		tos = -1;
	}

	void push(T element)
	{
		if (tos == 99)
		{
			cout << "stack full!" << endl;
			return;
		}
		tos++;
		data[tos] = element;
	}

	T pop()
	{
		if (tos == -1)
		{
			cout << "stack empty!" << endl;
			return 0;
		}
		return data[tos--];
	}
};

int main()
{
	MyStack<int> istack;
	cout << istack.pop() << endl;
	istack.push(3);
	istack.push(4);
	istack.push(5);
	cout << istack.pop() << endl;

	MyStack<double> dstack;
	dstack.push(3.5);
	dstack.push(4.5);
	cout << dstack.pop() << endl;

	MyStack<char>* p = new MyStack<char>();
	p->push('a');
	p->push('b');
	cout << p->pop() << endl;

	delete p;


}