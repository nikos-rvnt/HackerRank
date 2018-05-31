#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    double mealCost, tip, tax ;
    int tipPercent, taxPercent, total ;
    
    cin >> mealCost ;
    cin >> tipPercent ;
    cin >> taxPercent ;
    
    tip = mealCost*tipPercent/100 ;
    tax = mealCost*taxPercent/100 ;
    total = round( mealCost + tip + tax ) ;
    //cout << total << endl ;
    //round(total) ;
    
    cout << "The total meal cost is " << (total) << " dollars." << endl ;
    
    return 0;

}
