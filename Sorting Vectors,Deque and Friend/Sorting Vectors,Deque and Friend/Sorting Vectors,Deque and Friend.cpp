// Sorting Vectors,Deque and Friend.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Test
{
	int id;
	string name;

public:
	Test(int id, string name) : id(id), name(name)
	{

	}

	void print()
	{
		cout << id << " : " << name << endl;
	}

	/*bool operator<(const Test & other) const
	{
		return name < other.name;
	}*/
	friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b)
{
	return a.name < b.name;
}
int main()
{
	vector<Test> tests;

	tests.push_back(Test(5, "Joshua"));
	tests.push_back(Test(6, "Sue"));
	tests.push_back(Test(2, "Yoon"));
	tests.push_back(Test(55, "Kittle"));

	sort(tests.begin(), tests.end(), comp);

	for (int i = 0; i < tests.size(); i++)
	{
		tests[i].print();
	}

    return 0;
}

