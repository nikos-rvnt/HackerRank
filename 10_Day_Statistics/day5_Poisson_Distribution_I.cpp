#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int factorial(int n) {
	return (n == 1 || n == 0) ? 1 : n*(factorial(n - 1));
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	float mean;
	int actual;
	cin >> mean >> actual;

	float probAct;
	// Poisson: (λ^κ * e^-λ)/κ!
	probAct = (pow(mean, actual)*exp(-mean)) / (factorial(actual));

	printf("%.3f", probAct);

	return 0;
}