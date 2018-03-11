#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<size_t> rankSort(const vector<float>& v_temp) {

	vector<pair<float, size_t> > v_sort(v_temp.size());

	for (size_t i = 0U; i < v_sort.size(); ++i) {
		v_sort[i] = make_pair(v_temp[i], i);
	}

	sort(v_sort.begin(), v_sort.end());

	pair<double, size_t> rank;
	vector<size_t> result(v_temp.size());

	for (size_t i = 0U; i < v_sort.size(); ++i) {
		if (v_sort[i].first != rank.first) {
			rank = make_pair(v_sort[i].first, i);
		}
		result[v_sort[i].second] = rank.second;
	}

	return result;
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int nums;
	cin >> nums;

	vector<float> X(nums), Y(nums);
	for (int i = 0; i<nums; i++) {
		cin >> X[i];
	}
	for (int i = 0; i<nums; i++) {
		cin >> Y[i];
	}

	vector<size_t> rankX(nums), rankY(nums);
	rankX = rankSort(X);
	rankY = rankSort(Y);
	int sumd = 0;
	for (int i = 0; i<nums; i++) {
		rankX[i]++;
		rankY[i]++;
		sumd = sumd + pow(int(rankX[i] - rankY[i]), 2);
	}
	//cout << sumd ;
	float srcCoef = 1 - (6 * sumd) / (nums*(pow(nums, 2) - 1));
	printf("%.3f", srcCoef);

	return 0;

}