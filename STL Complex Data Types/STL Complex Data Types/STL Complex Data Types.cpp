// STL Complex Data Types.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, vector<int>> scores;

	scores["joshua"].push_back(20);
	scores["joshua"].push_back(10);
	scores["Mike"].push_back(25);

	for (map<string, vector<int>>::iterator it = scores.begin(); it != scores.end(); it++)
	{
		string name = it->first;
		vector<int> scoreList = it->second;

		cout << name << " : " << flush;

		for (int i = 0; i < scoreList.size(); i++)
		{
			cout << scoreList[i] << " " << flush;
		}

		cout << endl;
	}

    return 0;
}

