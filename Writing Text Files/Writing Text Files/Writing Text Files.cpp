// Writing Text Files.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//ofstream outFile;

	fstream outFile;

	string outputFileName = "text.txt";

	//outFile.open(outputFileName);
	outFile.open(outputFileName, ios::out);

	if (outFile.is_open())
	{
		outFile << "Hello there" << endl;
		outFile << 123 << endl;
		outFile.close();
	}
	else
	{
		cout << "Could not create file : " << outputFileName << endl;
	}

    return 0;
}

