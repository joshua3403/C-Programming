// A Complex Number Class.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Complex.h"
#include <iostream>

using namespace std;
using namespace joshofprogramming;

int main()
{
	Complex c1(1,3);
	Complex c2 = c1;

	c1 = c2;

	cout << c1 << endl;

    return 0;
}

