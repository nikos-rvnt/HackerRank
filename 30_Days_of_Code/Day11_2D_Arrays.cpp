
//#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int matr[3][3] ;
	int sum[4][4] ;
	int maxsum = -50, temp = 0 ;
	int i, j ;

	vector< vector<int> > arr(6, vector<int>(6)) ;
	for (int arr_i = 0; arr_i < 6; arr_i++)
	{
		for (int arr_j = 0; arr_j < 6; arr_j++)
		{
			cin >> arr[arr_i][arr_j] ;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			temp = 0;
			for (int mi = 0; mi < 3; mi++)
			{
				for (int mj = 0; mj < 3; mj++)
				{
					if ((mi == 1) && (mj != 1)){
						matr[mi][mj] = 0;
					}
					else {
						matr[mi][mj] = arr[i + mi][j + mj];
						temp = temp + matr[mi][mj];
						//cout << temp;
					}
				}
			}
			sum[i][j] = temp;
		}
	}
		
	
	for (int ii=0; ii<4; ii++)
	{
		for (int jj = 0; jj<4; jj++)
		{
			if (sum[ii][jj] > maxsum)
				maxsum = sum[ii][jj] ;
		}
	}

	cout << maxsum ;
	
	return 0;

}
