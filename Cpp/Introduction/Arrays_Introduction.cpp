#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{
    int num ;
    cin >> num ;

    int inp[num], out[num] ;
    for (int i=0;i<num ; i++)
    {
         cin >> inp[i] ; 
    }
    
    for(int i=0;i<num;i++)
    {
        out[i] = inp[num-1-i] ;
        cout << out[i] << " " ;
    }
        
    return 0;
}
