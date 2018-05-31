#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <regex>

using namespace std;


int main() {

	int N;
	cin >> N;

	multiset<string> fnm;
	multiset<string> eID;
	multiset<string> ::iterator it;

	regex exp(".+@gmail\\.com$");

	vector<string> fnames;
	
	for (int a0 = 0; a0 < N; a0++) {
		string firstName;
		string emailID;
		cin >> firstName >> emailID;
		fnm.insert(firstName);
		if (regex_match(emailID, exp))
		{
			fnames.push_back(firstName);
		}
	}

	sort(fnames.begin(), fnames.end());

	for (int i = 0; i < fnames.size();i++)
	{
		cout << fnames[i] << endl;
	}

	return 0;
}
