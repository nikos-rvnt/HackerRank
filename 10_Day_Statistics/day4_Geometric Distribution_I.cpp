#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int num, den, pros;
	cin >> num >> den;
	float probD = 1.0*num / den;
	cin >> pros;
	//cout << "erw" << probD ;
	float prob;
	prob = pow((1 - probD), (pros - 1))*probD;
	printf("%.3f", prob);

	return 0;

}