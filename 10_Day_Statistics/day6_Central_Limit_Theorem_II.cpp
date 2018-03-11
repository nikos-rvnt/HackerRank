#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int remT, numS;
	float mean, std;
	cin >> remT >> numS >> mean >> std;

	float meanN = mean*numS;
	float stdN = sqrt(numS)*std;

	float probT = .5*(1 + erf((remT - meanN) / (stdN*sqrt(2))));

	printf("%.4f", probT);

	return 0;

}