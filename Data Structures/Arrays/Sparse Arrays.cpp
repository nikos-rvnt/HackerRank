#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numS ;
    cin >> numS ;
    
    vector<string> stringakia(numS) ;
    for(int s_i=0; s_i<numS; s_i++){
        cin >> stringakia[s_i] ;
    }
    
    int numQ ;
    cin >> numQ ;
    
    //vector<string> qq(numQ) ;
    string que ;
    int count ;
    for(int q_i=0; q_i<numQ; q_i++){
        // cin >> qq[q_i] ;
        cin >> que ;
        count = 0 ;
        for(int s_i=0; s_i<numS; s_i++){
            if(stringakia[s_i]==que)
                count++ ;
        }
        cout << count << endl ;
    }
    
    return 0 ;
    
}
