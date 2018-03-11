#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int num, den;
	cin >> num >> den;
	float prob = 1.0*num / den;

	int inspNum;
	cin >> inspNum;

	float probQ = 0.0;
	for (int i = 1; i <= 5; i++) {
		probQ = probQ + pow(1 - prob, i - 1)*prob;
	}
	printf("%.3f", probQ);

	return 0;
}
