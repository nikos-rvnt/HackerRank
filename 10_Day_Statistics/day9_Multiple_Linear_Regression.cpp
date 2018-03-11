#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector< vector<float> > transMat(vector< vector<float> > ft, int nF, int nFS) {
	vector< vector<float> > fTr(nF, vector<float>(nFS));

	for (int j = 0; j<nFS; j++) {
		for (int i = 0; i<nF; i++) {
			fTr[i][j] = ft[j][i];
		}
	}

	return fTr;
}

vector< vector<float> > mulMats(vector< vector<float> > ft, vector< vector<float> > ftT, int nF1, int nFS, int nF2) {
	vector< vector<float> > fTf(nF1, vector<float>(nF2));
	float sum;
	//int neoj;

	for (int z = 0; z<nF1; z++) {
		for (int w = 0; w<nF2; w++) {
			sum = 0.0;
			for (int j = 0; j<nFS; j++) {
				sum = sum + ft[z][j] * ftT[j][w];
			}
			fTf[z][w] = sum;
		}
	}

	return fTf;
}

void swap_row(vector<float> *x, vector<float> *y) {
	for (int i = 0; i< x->size(); i++) {
		float temp = (*x)[i];
		(*x)[i] = (*y)[i];
		(*y)[i] = temp;
	}
}

vector< vector<float> > inv(vector< vector<float> > x) {

	vector< vector<float> > res(x.size(), vector<float>(x.size(), 0));
	int n = x.size();
	for (int i = 0; i< n; i++)
		res[i][i] = 1.0;
	// converting to row-echelon
	for (int j = 0; j < n - 1; j++) {
		if (x[j][j] == 0)
			for (int i = j + 1; i < n; i++) {
				if (x[i][j] != 0) {
					swap_row(&x[j], &x[i]);
					swap_row(&res[j], &res[i]);
					break;
				}
			}
		if (x[j][j] == 0)
			continue;
		for (int i = j + 1; i< n; i++) {
			float factor = -x[i][j] / x[j][j];
			for (int k = 0; k< n; k++) {
				x[i][k] += factor*x[j][k];
				res[i][k] += factor*res[j][k];
			}
		}
	}
	//converting to diagnoal form
	for (int i = n - 1; i>0; i--) {
		for (int j = i - 1; j >= 0; j--) {
			float factor = -x[j][i] / x[i][i];
			for (int k = 0; k< n; k++) {
				x[j][k] += factor*x[i][k];
				res[j][k] += factor*res[i][k];
			}
		}
	}
	//converting to unit.
	for (int i = 0; i< n; i++) {
		for (int j = 0; j <n; j++)
			res[i][j] /= x[i][i];
	}
	return res;
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int numF, numFSet;// #coefficients + 1, #feature_set
	cin >> numF >> numFSet;

	vector< vector<float> > ftrs(numFSet, vector<float>(numF + 1));
	vector< vector<float> > Y(numFSet, vector<float>(1));
	for (int i = 0; i<numFSet; i++) {
		ftrs[i][0] = 1.0;
		for (int j = 1; j<(numF + 1); j++) {
			// X matrix each line a feature set
			cin >> ftrs[i][j];
		}
		// Y matrix 
		cin >> Y[i][0];
	}

	// #queries
	int numQ;
	cin >> numQ;
	vector< vector<float> > ftrQ(numQ, vector<float>(numF + 1));
	for (int i = 0; i<numQ; i++) {
		ftrQ[i][0] = 1;
		for (int j = 1; j<(numF + 1); j++) {
			// Query matrix
			cin >> ftrQ[i][j];
		}
	}

	// transpose ftrs
	vector< vector<float> > ftrsT(numF + 1, vector<float>(numFSet));
	ftrsT = transMat(ftrs, numF + 1, numFSet);

	// ftrsTrans*ftrs
	vector< vector<float> > ftTft(numF + 1, vector<float>(numF + 1));
	ftTft = mulMats(ftrsT, ftrs, numF + 1, numFSet, numF + 1);

	// find inverse matrix
	vector< vector<float> > invFF(numF + 1, vector<float>(numF + 1));
	invFF = inv(ftTft);

	// inv(ftrsTrans*ftrs)*ftrsTrans
	vector< vector<float> > ftT(numF + 1, vector<float>(numFSet));
	ftT = mulMats(invFF, ftrsT, numF + 1, numF + 1, numFSet);

	// B = inv(ftrsT*ftrs)*ftrsT*Y  
	vector< vector<float> > B(numF + 1, vector<float>(1));
	B = mulMats(ftT, Y, numF + 1, numFSet, 1);

	// now find whats asked -> Y for query values
	vector< vector<float> > Yq(numF + 1, vector<float>(1));
	Yq = mulMats(ftrQ, B, numQ, numF + 1, 1);

	// whats Y of queries ?? 
	for (int i = 0; i<numQ; i++) {
		printf("%.2f \n", Yq[i][0] + 0.01);
	}

	return 0;

}

