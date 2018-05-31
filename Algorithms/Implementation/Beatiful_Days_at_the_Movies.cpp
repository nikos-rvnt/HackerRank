#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int ii, jj, kk ;
    cin >> ii >> jj >> kk ;
     
    int count = 0 ;
    int n1, n2, n3, num ;
    for(int d_i=ii; d_i<=jj; d_i++){        
        num = 0 ;
        n1 = d_i ;
        while(n1)
        {
            num *= 10 ;
            num += n1 % 10 ;
            n1 /= 10 ;
        }
        //cout << num << "++";
        if((abs(d_i-num)%kk)==0){
            count++ ;
        }
    }
    
    cout << count ;
    
    return 0 ;
    
}
