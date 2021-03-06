// Overloading the Assignment Operator.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Test
{
private:
	int id;
	string name;

public:
	Test() : id(0), name("")
	{

	}
	
	Test(int id, string name) : id(id), name(name)
	{

	}

	void print()
	{
		cout << id << " : " << name << endl;
	}
	const Test operator=(const Test &other)
	{
		cout << "Assignment Running!" << endl;

		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test& other)
	{
		cout << "Copy Constructor Running!" << endl;

		id = other.id;
		name = other.name;
	}
};

int main()
{
	Test test1(10, "Mike");
	cout << "Print test1: " << flush;
	test1.print();

	Test test2(20, "Bob");

	test2 = test1;
	cout << "Print test2: " << flush;
	test2.print();

	Test test3(30, "Nyne");
	// test3 = test2 = test1;

	// test3 = test2;
	test3.operator=(test2);
	cout << "Print test3: " << flush;
	test3.print();

	cout << endl;

	// Copy Initialization
	Test test4 = test1;
	test4.print();
    return 0;
}

