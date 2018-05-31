#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    vector<int> height(t) ;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        height[a0] = n ;
    }
    
    int hTree ;
    for(int h_i=0; h_i<t; h_i++){
        hTree = 1 ;        
        for(int h_j=1; h_j<=height[h_i]; h_j++){
            if(h_j%2==1)
                hTree = hTree*2 ;
            else
                hTree++ ;
        }
        cout << hTree << endl ;
    }
    
    return 0 ;
    
}
