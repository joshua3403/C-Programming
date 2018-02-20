// Two-dimensional Vectors.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector< vector<int> > grid(3, vector <int>(4, 7));

	grid[1].push_back(8);

	for (int row = 0; row < grid.size(); row++)
	{
		for (int col = 0; col < grid[row].size(); col++)
		{
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}

    return 0;
}
