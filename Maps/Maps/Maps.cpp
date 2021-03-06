// Maps.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, int> ages;

	ages["joshua"] = 70;
	ages["gogi"] = 40;
	ages["jaegun"] = 30;

	ages["chung"] = 100;

	ages.insert(pair<string, int>("byung", 50));

	cout << ages["gogi"] << endl;

	if (ages.find("jaegun") != ages.end())
	{
		cout << "Found jaegun" << endl;
	}
	else
	{
		cout << "Key not found" << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		pair<string, int> age = *it;

		cout << age.first << " : " << age.second << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}

    return 0;
}

