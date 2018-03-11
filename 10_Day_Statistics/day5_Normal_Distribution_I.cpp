#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	float meanN, stdN;
	cin >> meanN >> stdN;
	float hourA, hourB1, hourB2;
	cin >> hourA >> hourB1 >> hourB2;

	float cumNorA, cumNorB1, cumNorB2, cumNorB;
	// ypologismos kanonikopoihmenhs gaussianhs : F(x) = (1/2)*(1+errorf((x-μ)/(σ*sqrt(2))))
	cumNorA = .5*(1 + erf((hourA - meanN) / (stdN*sqrt(2))));
	cumNorB1 = .5*(1 + erf((hourB1 - meanN) / (stdN*sqrt(2))));
	cumNorB2 = .5*(1 + erf((hourB2 - meanN) / (stdN*sqrt(2))));
	cumNorB = cumNorB2 - cumNorB1;

	printf("%.3f \n%.3f", cumNorA, cumNorB);

	return 0;

}