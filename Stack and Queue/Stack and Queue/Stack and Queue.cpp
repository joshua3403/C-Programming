// Stack and Queue.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stack>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

class Test
{
private:
	string name;

public:
	Test(string name) : name(name)
	{

	}
	
	~Test()
	{
		cout << "Object destroyed" << endl;
 	}

	void print()
	{
		cout << name << endl;
	}
};

int main()
{
	// LIFO
	stack<Test> testStack;

	testStack.push(Test("joshua"));
	testStack.push(Test("Hanjoo"));
	testStack.push(Test("Hyaejin"));

	cout << endl;

	/*
		* This is invalid code!. Object is destroyed.
		Test &test1 = testStack.top();
		testStack.pop();
		test1.print(); // Reference refers to destroyed objects
	*/

	while (testStack.size() > 0)
	{
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}

	cout << endl;

	// FIFO
	queue<Test> testQueue;

	testQueue.push(Test("joshua"));
	testQueue.push(Test("Hanjoo"));
	testQueue.push(Test("Hyaejin"));

	cout << endl;

	/*
	* This is invalid code!. Object is destroyed.
	Test &test1 = testStack.top();
	testStack.pop();
	test1.print(); // Reference refers to destroyed objects
	*/

	testQueue.back().print();

	cout << endl;

	while (testQueue.size() > 0)
	{
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	return 0;
}

