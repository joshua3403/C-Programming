// Custom Objects as Map Values.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
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

	void Print()
	{
		cout << name << " : " << age << endl;
	}
};
int main()
{
	map<int, Person> people;

	people[50] = Person("Mike", 50);
	people[20] = Person("Josh", 20);
	people[1] = Person("Fernandes", 60);

	people.insert(make_pair(44, Person("Yuri", 23)));
	people.insert(make_pair(4, Person("Haejin", 83)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->first << " = " << flush;
		it->second.Print();
	}

    return 0;
}

