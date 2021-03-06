// Basic Exceptions.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;

	if (error1)
	{
		throw "Something wrong.";
	}
	if (error2)
	{
		throw string("Something else went wrong.");
	}
}

void usesMightGoWrong(){
	mightGoWrong();
	}

int main()
{
	try
	{
		usesMightGoWrong();
	}
	catch (int e)
	{
		cout << "Error code : " << e << endl;
	}
	catch (const char * e)
	{
		cout << "Error Message : " << e << endl;
	}
	catch (string &e)
	{
		cout << "String Error message : " << e << endl;
	}

	cout << "Still Running" << endl;

    return 0;
}

