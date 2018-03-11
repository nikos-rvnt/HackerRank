#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int mean, std, firstV, secondV;
	cin >> mean >> std;
	cin >> firstV >> secondV;

	float cumN80, cumN60, up80, up60, down60;
	cumN80 = .5*(1 + erf((80 - mean) / (std*sqrt(2))));
	cumN60 = .5*(1 + erf((60 - mean) / (std*sqrt(2))));

	// epi 100 gt thelw pososto
	up80 = (1 - cumN80) * 100;
	up60 = (1 - cumN60) * 100;
	down60 = (cumN60) * 100;

	printf("%.2f \n%.2f \n%.2f", up80, up60, down60);

	return 0;

}