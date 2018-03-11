#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int posa;
	cin >> posa;

	vector<int> x(posa);
	float sum = 0, tt1;
	for (int i = 0; i<posa; i++) {
		cin >> tt1;
		x[i] = tt1;
		sum = sum + x[i];
	}
	cout << (float)sum / posa << endl;

	sort(x.begin(), x.end());
	if (posa % 2 == 0)
		cout << (float)(x[posa / 2] + x[(posa / 2) - 1]) / 2 << endl;
	else
		cout << (float)x[posa / 2] << endl;
	/*
	int xf[posa] = {1}, mode = x[0];
	for(int i=0; i<posa; i++){
	for(int j=i+1; j<posa; j++){
	if(x[i]==x[j]){
	xf[i]++;
	}
	}
	}

	int t = *max_element(xf,xf+posa);
	if(t>1){
	for(int i=0; i<posa; i++){
	if(xf[i]==t)
	mode = x[i];
	}
	cout << mode << endl;
	}else
	cout << mode << endl;
	*/

	int mode = x[0];
	int count = 1;
	int count_max = 1;
	for (int i = 0;i<posa - 1;++i) {
		if (x[i] == x[i + 1])
			++count;
		else
			count = 1;
		// new mode // 
		if (count>count_max) {
			count_max = count;
			mode = x[i];
		}
	}
	cout << mode;
	return 0;
}
