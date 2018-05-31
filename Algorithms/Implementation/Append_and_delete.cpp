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

    string s ;
    cin >> s ;
    string t ;
    cin >> t ;
    int k ;
    cin >> k ;

    int count = 0 ;
    //int i=0 ;
    int mini ;
    if(s.length()<=t.length())
        mini = s.length() ;
    else 
        mini = t.length() ;
    for(int i=0; i<mini; i++){
        if(s[i]==t[i])
            count++ ;
        else 
            break ;
    }
    
    if((s.length()+t.length()-2*count)>k){
        cout << "No" ;
    }
    else if(((s.length()+t.length()-2*count)%2)==(k%2) ){
        cout << "Yes" ;
    }
    //else if((s.length()+t.length()-2*count)%2)==((k-1)%2) ){
    //    cout << "Yes"
    //}
    else if((int)(s.length()+t.length()-k)<0){
        cout << "Yes" ;
    }else{
        cout << "No" ;
    }
    
    return 0 ;

}
