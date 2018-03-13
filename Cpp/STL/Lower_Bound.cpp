#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT   
            The first line of the input contains the number of integers . The next line contains integers in sorted order. The next line contains , the number of queries. Then lines follow each containing a single integer .If the same number is present multiple times, you have to print the first index at which it occurs.
            The input is such that you always have an answer for each query.*/

    int numInt, numQ ;
    cin >> numInt ;
    vector<int> vecI ;

    for(int i=0; i<numInt; i++){
       int temp ;
       cin >> temp ;
       vecI.push_back(temp);
    }

    cin >> numQ ;
    int val ;
    for (int i=0; i<numQ; i++){
       //int val ;
       cin >> val;
       vector<int>::iterator low = lower_bound(vecI.begin(), vecI.end(), val);
       if (vecI[low - vecI.begin()] == val)
           cout << "Yes " << (low - vecI.begin()+1) << endl;
       else
           cout << "No " << (low - vecI.begin()+1) << endl;
   }
    return 0 ;
    
}
