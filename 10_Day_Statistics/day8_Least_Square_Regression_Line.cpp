#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	vector<int> X, Y;
	int tempX, tempY, sumx = 0, sumx2 = 0, sumy = 0, sumxy = 0;
	float meanx, meany;
	for (int i = 0; i<5; i++) {
		cin >> tempX;
		X.push_back(tempX);
		cin >> tempY;
		Y.push_back(tempY);
		sumx = sumx + tempX;
		sumx2 = sumx2 + pow(tempX, 2);
		sumy = sumy + tempY;
		sumxy = sumxy + tempX*tempY;
	}
	meanx = sumx / 5;
	meany = sumy / 5;

	float aCoef, bCoef;
	// b = (n*Σ(xy)-Σx*Σy)/(nΣx^2 - (Σx)^2)
	bCoef = (5 * sumxy - sumx*sumy) / (5 * sumx2 - pow(sumx, 2));
	// a = mesoy - b*mesox 
	aCoef = meany - bCoef*meanx;

	float reglineY = aCoef + bCoef * 80;
	printf("%.3f", reglineY);

	return 0;

}