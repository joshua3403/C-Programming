// Strucks and Padding.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>

using namespace std;

#pragma pack(push, 1)
//#pragma pack(pop)

struct Person
{
	char Name[50];
	int Age;
	double Weight;
};

int main()
{
	cout << sizeof(Person) << endl;

    return 0;
}

