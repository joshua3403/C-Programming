// Vectors and Memory.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<double> Numbers(0);

	cout << "Size : " << Numbers.size() << endl;

	int capacity = Numbers.capacity();
	cout << "Cappacity : " << capacity << endl;

	for (int i = 0; i < 10000; i++)
	{
		if (Numbers.capacity() != capacity)
		{
			capacity = Numbers.capacity();
			cout << "Cappacity : " << capacity << endl;
		}

		Numbers.push_back(i);
	}

	Numbers.resize(100);
	cout << Numbers[2] << endl;
	cout << "Size : " << Numbers.size() << endl;
	cout << "Cappacity : " << Numbers.capacity() << endl;

	Numbers.reserve(1000000);
	cout << "Size : " << Numbers.size() << endl;
	cout << "Cappacity : " << Numbers.capacity() << endl;
    return 0;

}

