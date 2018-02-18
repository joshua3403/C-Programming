// Vectors.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> Name;

	Name.push_back("joshua");
	Name.push_back("Ye eun");
	Name.push_back("han ju");
	Name.push_back("Hyae jin");

	for (int i = 0; i < Name.size(); i++)
	{
		cout << Name[i] << endl;
	}

	for (vector<string>::iterator it = Name.begin(); it != Name.end(); it++)
	{
		cout << *it << endl;
	}

	vector<string>::iterator that = Name.begin();

	that += 3;

	cout << *that << endl;

    return 0;
}

