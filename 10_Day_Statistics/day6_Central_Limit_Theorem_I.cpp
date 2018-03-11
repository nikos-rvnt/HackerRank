#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int maxP, numBox, mean, std;
	cin >> maxP >> numBox >> mean >> std;

	// proseggistika logw kentrikou oriakou theorimato pairnw Gaussian katanomh me neo mean k std :
	int meanCLT = mean*numBox;
	float stdCLT = sqrt(numBox)*std;

	// vriskw thn pithanotita gia na einai ews 9800 pounds
	float cum49 = .5*(1 + erf((maxP - meanCLT) / (stdCLT*sqrt(2))));
	float perc49 = cum49;

	printf("%.4f", perc49);

	return 0;

}