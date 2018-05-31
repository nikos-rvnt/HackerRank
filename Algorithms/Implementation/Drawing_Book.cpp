#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int numpF, numpB ;
    int temp, nump ;
    
    temp = (n) / 2 ;
    numpF = (p) / 2   ;
    numpB = temp - numpF   ;
    
    nump = min( numpF, numpB) ;
    
    return nump ;
    
}

int main() {
    
    int n ;
    cin >> n ;
    int p ;
    cin >> p ;
    
    int result = solve(n, p) ;
    cout << result << endl ;
    
    return 0 ;

}
