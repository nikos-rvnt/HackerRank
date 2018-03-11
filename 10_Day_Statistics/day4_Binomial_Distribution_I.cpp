#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	float numB, numG;
	cin >> numB >> numG;

	float boyP = numB / (numB + numG);
	float girlP = numG / (numB + numG);

	float sum = 0;
	for (int i = 3; i <= 6; i++) {
		sum = sum + (factorial(6) / (factorial(i)*factorial(6 - i)))*pow(boyP, i)*pow(girlP, 6 - i);
	}

	printf("%.3f", sum);

	return 0;
}