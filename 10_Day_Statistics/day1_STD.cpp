#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int posa;
	cin >> posa;

	vector<int> x(posa);
	int sum = 0;
	for (int i = 0; i<posa; i++) {
		cin >> x[i];
		sum = sum + x[i];
	}
	float mesh = (float)sum / posa;

	float x_mesh = 0.0;
	for (int i = 0; i<posa; i++) {
		x_mesh = x_mesh + pow((x[i] - mesh), 2);
	}

	float stdiz = sqrt(x_mesh / posa);
	printf("%.1f", stdiz);

	return 0;

}