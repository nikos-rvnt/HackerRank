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

using namespace std;


int main(){
    
    int n ;
    int k ;
    int q ;
    cin >> n >> k >> q ;
    
    vector<int> a(n) ;
    int temp ;
    for(int a_i = 0; a_i < n; a_i++){
       cin >> temp ;
       if((a_i+k)<n)
           a[a_i+k] = temp ;
       else
           a[((a_i+k)-n)%n] = temp ;     
    }
    /*
    int temp1, temp2 ;
    for(int k_i=0; k_i<k; k_i++){
        temp2 = a[0] ;
        //int temp1 ;
        for(int a_i=0; a_i<n; a_i++){
            //if(a_i!=(n-1)){
                temp1 = a[(a_i+1)%(n)] ;
                a[(a_i+1)%n] = temp2 ;
                temp2 = temp1 ; 
            //}else{
            //    a[0] = temp2 ;
            //}
        }
    }*/
    
    for(int a0 = 0; a0 < q; a0++){
        int m ;
        cin >> m ;
        cout << a[m] << endl ;
    }
    
    return 0 ;
    
}
