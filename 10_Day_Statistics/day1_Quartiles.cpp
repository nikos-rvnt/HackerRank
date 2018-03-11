#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int posa, Q1, Q2, Q3;
	cin >> posa;

	vector<int> x(posa);
	for (int i = 0; i<posa; i++) {
		cin >> x[i];
	}

	sort(x.begin(), x.end());

	vector<int> Up;
	vector<int> Low;
	if (posa % 2 == 0) {
		//vector<int> Up(posa/2-1);
		//vector<int> Low(posa/2-1);
		Q2 = (x[posa / 2] + x[posa / 2 - 1]) / 2;

		int i;
		for (i = 0; i<(posa / 2);i++) {
			Low.push_back(x[i]);
		}

		int j;
		for (j = posa / 2;j<posa;j++) {
			Up.push_back(x[j]);
		}

		if ((posa / 2) % 2 == 0) {
			Q1 = (Low[(i - 1) / 2] + Low[(i - 1) / 2 + 1]) / 2;
			Q3 = (Up[(i - 1) / 2] + Up[(i - 1) / 2 + 1]) / 2;
		}
		else {
			Q1 = Low[i / 2];
			Q3 = Up[i / 2];
		}

	}
	else {
		//vector<int> Up((posa-1)/2);
		//vector<int> Low((posa-1)/2);
		Q2 = x[(posa - 1) / 2];

		int i;
		for (i = 0; i<((posa - 1) / 2);i++) {
			Low.push_back(x[i]);
		}
		//Q1 = (Low[(i - 1) / 2] + Low[(i - 1) / 2 + 1]) / 2;

		int j;
		for (j = ((posa - 1) / 2 + 1);j<posa;j++) {
			Up.push_back(x[j]);
		}
		//Q3 = (Up[(i - 1) / 2] + Up[(i - 1) / 2 + 1]) / 2;
		if (((posa - 1) / 4) % 2 == 0) {
			Q1 = (Low[(i - 1) / 2] + Low[(i - 1) / 2 + 1]) / 2;
			Q3 = (Up[(i - 1) / 2] + Up[(i - 1) / 2 + 1]) / 2;
		}
		else {
			Q1 = Low[i / 2];
			Q3 = Up[i / 2];
		}
	}
	cout << Q1 << endl << Q2 << endl << Q3 << endl;
	return 0;
}