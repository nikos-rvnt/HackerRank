#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int posa;
	cin >> posa;
	//cout << endl ;

	vector<int> x(posa);
	vector<int> w(posa);
	for (int i = 0; i<posa; i++) {
		int t1;
		cin >> t1;
		x[i] = t1;
	}
	float sumAr = 0.0;
	float sumPar = 0.0;
	for (int j = 0; j<posa; j++) {
		int t2;
		cin >> t2;
		w[j] = t2;
		sumAr = sumAr + x[j] * w[j];
		sumPar = sumPar + w[j];
	}
	float weig_m;
	weig_m = (1.0)*(sumAr / sumPar);
	printf("%.1f", weig_m);


	return 0;

}
