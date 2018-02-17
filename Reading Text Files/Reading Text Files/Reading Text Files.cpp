// Reading Text Files.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	string inFileName = "test.txt";

	ifstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open())
	{
		string line;

		while (!inFile.eof())
		{
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	}
	else
	{
		cout << "Cannot open file : " << inFileName << endl;
	}

    return 0;
}

