#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int num ;
    cin >> num ;
    
    vector<int> vec ; 
    for( int i=0; i<num; i++)
    {
        int temp ;
        cin >> temp ;
        vec.push_back(temp) ;
    }
    
    sort( vec.begin(), vec.end()) ;
    
    for( int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " " ; 
    }
    
    return 0 ;
    
}
