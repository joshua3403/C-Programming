// Overloading Plus.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Complex.h"

using namespace std;
using namespace joshofprogramming;

int main()
{	
	Complex c1(3, 4);
	Complex c2(2, 5);
	Complex c3 = c1 + c2;

	cout << c1 << endl;
	cout << c1 + c2 << endl;
	cout << c3 << endl;
	cout << c1 + c2 + c3 << endl;

	Complex c4(4, 2);
	Complex c5 = c4 + 7;

	cout << c5 << endl;

	Complex c6(3, 7);

	cout << 3.2 + c6 << endl;

	cout << 8 + 3.4 + c1 + 5 + c6 << endl;

	return 0;
}

