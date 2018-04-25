#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;

    char symb[n][n] ;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<(n-i-1))
                cout << ' ' ; //symb[i][j] = ' ' ;
            else
                cout << '#' ; //symb[i][j] = '#' ;
        }
        cout << endl ;
    }

    return 0 ;

}
