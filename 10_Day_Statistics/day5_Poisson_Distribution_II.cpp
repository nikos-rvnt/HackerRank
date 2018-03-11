#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	float meanA, meanB;
	cin >> meanA >> meanB;

	float meanA2, meanB2;
	// sthn Poisson isxyei E[x] = Var[x] = λ => Var[x] = E[x^2] - E[x]^2 => E[x^2] = Var[x] + E[x]^2 = λ + λ^2
	meanA2 = meanA + pow(meanA, 2);
	meanB2 = meanB + pow(meanB, 2);

	float dailyA = 160 + 40 * meanA2;
	float dailyB = 128 + 40 * meanB2;

	printf("%.3f \n%.3f", dailyA, dailyB);

	return 0;

}