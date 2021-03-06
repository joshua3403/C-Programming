// Printing - Overloading Left Bit Shift.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
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

	friend ostream &operator<<(ostream &out, const Test &test)
	{
		cout << test.id << " : " << test.name;
		return out;
	}
};

int main()
{
	Test test1(10, "Mike");

	cout << test1 << endl;
    return 0;
}

