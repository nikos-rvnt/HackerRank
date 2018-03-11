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

	vector<int> w(posa);
	int sum = 0;
	for (int i = 0; i<posa; i++) {
		cin >> w[i];
		sum = sum + w[i];
	}
	//sort(x.begin(),x.end());

	vector<int> xw(sum);
	int t = 0;
	for (int i = 0; i<posa; i++) {
		for (int j = t; j<(t + w[i]); j++) {
			xw[j] = x[i];
			//cout << xw[j];
		}
		t = t + w[i];
	}
	sort(xw.begin(), xw.end());

	vector<int> Up;
	vector<int> Low;
	posa = sum;
	if (posa % 2 == 0) {
		//vector<int> Up(posa/2-1);
		//vector<int> Low(posa/2-1);
		Q2 = (xw[posa / 2] + xw[posa / 2 - 1]) / 2;

		int i;
		for (i = 0; i<(posa / 2);i++) {
			Low.push_back(xw[i]);
		}

		int j;
		for (j = posa / 2;j<posa;j++) {
			Up.push_back(xw[j]);
		}

		if ((posa / 2) % 2 == 0) {
			Q1 = (Low[(i - 1) / 2] + Low[(i - 1) / 2 + 1]) / 2;
			Q3 = (Up[(i - 1) / 2] + Up[(i - 1) / 2 + 1]) / 2;
		}
		else {
			Q1 = Low[i / 2];
			Q3 = Up[i / 2];
		}

		float qout = Q3 - Q1;
		printf("%.1f", qout);

	}
	else {
		//vector<int> Up((posa-1)/2);
		//vector<int> Low((posa-1)/2);
		Q2 = xw[(posa - 1) / 2];

		int i;
		for (i = 0; i<((posa - 1) / 2);i++) {
			Low.push_back(xw[i]);
		}
		//Q1 = (Low[(i - 1) / 2] + Low[(i - 1) / 2 + 1]) / 2;

		int j;
		for (j = ((posa - 1) / 2 + 1);j<posa;j++) {
			Up.push_back(xw[j]);
		}
		//Q3 = (Up[(i - 1) / 2] + Up[(i - 1) / 2 + 1]) / 2;

		if (((posa-1) / 4) % 2 == 0) {
			Q1 = (Low[(i - 1) / 2] + Low[(i - 1) / 2 + 1]) / 2;
			Q3 = (Up[(i - 1) / 2] + Up[(i - 1) / 2 + 1]) / 2;
		}
		else {
			Q1 = Low[i / 2];
			Q3 = Up[i / 2];
		}
		//cout << endl << Q1 << "rere" << Q3;

		float qout = Q3 - Q1;
		printf("%.1f", qout);
	}

	return 0;
}