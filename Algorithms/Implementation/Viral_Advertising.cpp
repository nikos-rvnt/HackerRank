#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int days ;
    cin >> days ;
    
    int sumLi = 0, peop = 5 ;
    for(int i=0; i<days; i++){
        sumLi = sumLi + floor(peop/2) ;
        peop = floor(peop/2)*3 ;
    }
    cout << sumLi ;
    
    return 0;
    
}
