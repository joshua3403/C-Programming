// Parsing Text Files.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string FileName = "Stats.txt";

	ifstream inFileName;

	inFileName.open(FileName);

	if (!inFileName.is_open())
	{
		return 1;
	}

	while (!inFileName.eof())
	{
		string line;

		getline(inFileName, line, ':');

		int population;
		inFileName >> population;

		inFileName.get();

		cout << "'" << line << "'" << " -- '" << population << "'" << endl;
	}

	/*
	while (inFileName)
	{
	string line;

	getline(inFileName, line, ':');

	int population;
	inFileName >> population;


	input >> ws;

	if(!inFileName)
	{
		break;
	}
	cout << "'" << line << "'" << " -- '" << population << "'" << endl;
	}
	*/

	inFileName.close();

    return 0;
}

