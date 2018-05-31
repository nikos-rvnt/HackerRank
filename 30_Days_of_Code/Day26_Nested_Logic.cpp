#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {

	int fine ;
	int da, ma, ya ;
	cin >> da >> ma >> ya ;

	int de, me, ye ;
	cin >> de >> me >> ye ;

	if (ye-ya>1) 
		fine = 0;
	else if((ye-ya)>=0){
		if (ma <= me) {
			if (de >= da)
				fine = 0;
			else {
				if ((me - ma) == 1)
					fine = 0 ;
				else
					fine = 15 * (abs(da - de));
			}
		}
		else {
			if ((ye - ya) == 1)
				fine = 0;
			else if ((me - ma) == 1 && (de-da)>0)
				fine = 0 ;
			else
				fine = 500 * (abs(ma-me)) ;
		}
	}
	else {
		fine = 10000;
	}
	cout << fine ;
	
	return 0 ;

}
