// Exception catching order.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <exception>

using namespace std;

void goesWrong()
{
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected)
	{
		throw bad_alloc();
	}

	if (error2Detected)
	{
		throw exception();
	}
}


int main()
{
	try
	{
		goesWrong();
	}
	catch (bad_alloc &e)
	{
		cout << " Catching  bad_alloc : " << e.what() << endl;
	}
	catch (exception &e)
	{
		cout << " Catching exception : " << e.what() << endl;
	}

    return 0;
}

