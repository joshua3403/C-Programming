// Custom Exceptions.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception
{
public:
	virtual const char* what() const throw()
	{
		return "Something bad happend!";
	}
};

class Test
{
public:
	void goesWrong()
	{
		throw MyException();
	}
};

int main()
{
	Test test;

	try
	{
		test.goesWrong();
	}
	catch (MyException &e)
	{
		cout << e.what() << endl;
	}

    return 0;
}

