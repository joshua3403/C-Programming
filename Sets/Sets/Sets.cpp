// Sets.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <set>
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
	
	void print() const
	{
		cout << id << " : " << name << endl;
	}

	bool operator<(const Test &object) const
	{
		if (name == object.name)
		{
			return id < object.id;
		}
		else
		{
			return name < object.name;

		}
	}
};
int main()
{
	set<int> numbers;

	numbers.insert(50);
	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(20);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}

	set<int>::iterator itFind = numbers.find(30);

	if (itFind != numbers.end())
	{
		cout << "Found : " << *itFind << endl;
	}

	set<Test> tests;

	tests.insert(Test(10, "Mike"));
	tests.insert(Test(20, "josh"));
	tests.insert(Test(30, "Yoon"));
	tests.insert(Test(40, "Dell"));

	for (set<Test>::iterator its = tests.begin(); its != tests.end(); its++)
	{
		its->print();
	}

    return 0;
}

