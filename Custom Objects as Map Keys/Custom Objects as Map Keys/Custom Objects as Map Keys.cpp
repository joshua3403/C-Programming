// Custom Objects as Map Keys.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person() : name(""), age(0)
	{

	}

	Person(const Person &object)
	{
		cout << "Copy constructor running!" << endl;
		name = object.name;
		age = object.age;
	}

	Person(string name, int age) : name(name), age(age)
	{

	}
	void Print() const
	{
		cout << name << " : " << age << flush;
	}
	bool operator<(const Person &object) const
	{
		if (name == object.name)
		{
			return age < object.age;
		}
		else
		{
			return name < object.name;
		}
	}
};
int main()
{
	map<Person, int> people;

	people[Person("Joshua", 20)] = 30;
	people[Person("Hanju", 40)] = 123;
	people[Person("Yaeun", 70)] = 444;
	people[Person("HyaeJin", 10)] = 10;


	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->second << " = " << flush;
		it->first.Print();
		cout << endl;
	}

	return 0;
}
