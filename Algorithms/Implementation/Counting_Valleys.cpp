#include <cmath>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int numC ;
    cin >> numC ;
    string root ;
    cin >> root ;
    
    const char *array = root.c_str() ;
    
    int level = 0 ;
    int val = 0 ;
    
    for(int i=0; i<root.length(); i++){
        if(root[i]=='U')
            ++level ;
        if(root[i]=='D')
            --level ;
        if(level==0 && root[i]=='U')
            ++val ;
    }
    
    cout << val ;
    
    return 0 ;
    
}
