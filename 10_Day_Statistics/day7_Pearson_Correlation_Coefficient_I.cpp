#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int nums;
	cin >> nums;

	vector<float> X(nums), Y(nums);
	float meanX = 0.0, meanY = 0.0, stdX = 0.0, stdY = 0.0, sumx = 0.0, sumy = 0.0;
	for (int i = 0; i<nums; i++) {
		cin >> X[i];
		sumx = sumx + X[i];
	}
	meanX = sumx / nums;

	for (int i = 0; i<nums; i++) {
		cin >> Y[i];
		sumy = sumy + Y[i];
	}
	meanY = sumy / nums;

	for (int i = 0; i<nums; i++) {
		stdX = stdX + pow(X[i] - meanX, 2);
		stdY = stdY + pow(Y[i] - meanY, 2);
	}
	stdX = sqrt(stdX) / sqrt(nums);
	stdY = sqrt(stdY) / sqrt(nums);

	float pearsCoef = 0.0, temp = 0.0;
	for (int i = 0; i<nums; i++) {
		temp = temp + (X[i] - meanX)*(Y[i] - meanY);
	}
	pearsCoef = temp / (nums*stdX*stdY);

	printf("%.3f", pearsCoef);

	return 0;

}