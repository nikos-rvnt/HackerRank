#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;


int main() {

	int num;
	cin >> num;

	vector<long> vec;
	for (int i = 0; i<num; i++)
	{
		long tem;
		cin >> tem;
		vec.push_back(tem);
	}

	int num2, num3, num4;
	cin >> num2;
	vec.erase(vec.begin() + num2-1);

	cin >> num3 >> num4;
	vec.erase(vec.begin() + num3 - 1, vec.begin() + num4-1);

	cout << vec.size() << endl;
	for (int i = 0; i<vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	int tt;
	cin >> tt;
	return 0;

}
