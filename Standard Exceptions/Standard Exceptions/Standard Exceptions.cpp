// Standard Exceptions.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <exception>

using namespace std;

class CanGoWrong
{
public:
	CanGoWrong()
	{
		char * pMemory = new char[999999999999999];
		delete[] pMemory;
	}
};

int main()
{
	try
	{
		CanGoWrong wrong;
	}
	catch (bad_alloc &e)
	{
		cout << "Caught exception : " << e.what() << endl;
	}

	cout << "Still running." << endl;
    return 0;
}

