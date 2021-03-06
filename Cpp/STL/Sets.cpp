#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std ;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int numQ ;
    cin >> numQ ;
    
    set<int> setQ ;
    int type, numIn ;
    for(int i=0; i<numQ; i++){
        cin >> type ;
        cin >> numIn ;
        if(type==1){
            setQ.insert(numIn) ;
        }
        else if(type==2){
            setQ.erase(numIn) ;
        }
        else if(type==3){
            set<int>::iterator itr = setQ.find(numIn) ;
            if(itr==setQ.end())
                cout << "No" << endl ;
            else
                cout << "Yes" << endl ;
        }
    }
    
    return 0 ;
    
}
