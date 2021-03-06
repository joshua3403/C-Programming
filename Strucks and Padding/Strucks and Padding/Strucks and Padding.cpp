// Strucks and Padding.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#pragma pack(push, 1)

struct Person
{
	char Name[50];
	int Age;
	double Weight;
};
#pragma pack(pop)

int main()
{
	Person someone = { "joshua", 27, 70 };

	string fileName = "test.bin";

	////// Write binary file ////////////
	ofstream outputFile;

	outputFile.open(fileName, ios::binary);

	if (outputFile.is_open())
	{
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();
	}
	else
	{
		cout << "Could not create file : " << fileName << endl;
	}

	////// Read binary file ////////////
	Person someoneElse = {};

	ifstream inputFile;

	inputFile.open(fileName, ios::binary);

	if (inputFile.is_open())
	{
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

		inputFile.close();
	}
	else
	{
		cout << "Could not read file : " << fileName << endl;
	}

	cout << someoneElse.Name << ", " << someoneElse.Age << ", " << someoneElse.Weight << endl;
    return 0;
}

