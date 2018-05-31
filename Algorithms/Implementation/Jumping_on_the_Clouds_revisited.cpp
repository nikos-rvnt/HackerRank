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

using namespace std ;


int main(){
     
    int n ;
    int k ;
    cin >> n >> k ;
    
    vector<int> c(n) ;
    vector<int> thunders ;
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i] ;
       //if(c[c_i]==1)
       //    thunders.push_back(c_i) ;
    }
    
    int badget = 100 ;
    int jump = 0 ;
    int c_i = 0 ;
    do{
        jump = jump + k ;
        if(c[jump%n]==1)
            badget = badget - 1 - 2 ;
        else
            badget = badget - 1 ;
        
        c_i++ ;
    }
    while(jump%n!=0);
    
    cout << badget ;
    
    return 0 ;

}
