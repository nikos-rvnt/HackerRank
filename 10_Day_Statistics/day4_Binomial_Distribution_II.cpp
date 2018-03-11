#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int factorial(int n) {
	return (n == 1 || n == 0) ? 1 : n*factorial(n - 1);
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int perc, numB;
	cin >> perc >> numB;

	float posaMax2 = perc / 100.0;
	//printf("%f AWE",posaMax2);

	float sum = 0.0;
	for (int i = 0;i <= 2;i++) {
		//float temp = (factorial(10)/(factorial(i)*factorial(10-i)))*pow(1-posaMax2,i)*pow(posaMax2,10-i);
		//printf("%.3f",temp);
		sum = sum + (factorial(10) / (factorial(i)*factorial(10 - i)))*pow(posaMax2, i)*pow((1 - posaMax2), 10 - i);
		//printf("%.3f",sum);
	}

	float sum2 = 0.0;
	for (int i = 2;i <= 10;i++) {
		//float temp = (factorial(10)/(factorial(i)*factorial(10-i)))*pow(1-posaMax2,i)*pow(posaMax2,10-i);
		//printf("%.3f",temp);
		sum2 = sum2 + (factorial(10) / (factorial(i)*factorial(10 - i)))*pow(posaMax2, i)*pow((1 - posaMax2), 10 - i);
		//printf("%.3f",sum);
	}

	printf("%.3f \n%.3f", sum, sum2);

	return 0;

}