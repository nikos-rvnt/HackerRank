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
    
    vector<int> h(26) ;
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i] ;
    }
    
    string word ;
    cin >> word ;

    int max = 0 ;
    int w_temp ;
    for(int w_i=0; w_i<(word.size()); w_i++){
        w_temp = (char)word[w_i]-96 ;
        //cout << w_temp << "=+=" ;
        if(h[w_temp-1]>max){
            max = h[w_temp-1] ;
        }
    }
    //cout << max << "--" ;
    cout << max*1*word.size() ;
        
    return 0 ;

}
