#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int numV, mean, std;
	float midPerc, zVal;
	cin >> numV >> mean >> std;
	cin >> midPerc >> zVal;

	float meanN, stdN, lowV, upV, zscore = 1.96;
	meanN = mean;
	stdN = std / sqrt(100);

	// https://en.wikipedia.org/wiki/Standard_score
	lowV = meanN - zscore*stdN;
	upV = meanN + zscore*stdN;

	printf("%.2f \n%.2f", lowV, upV);

	return 0;

}