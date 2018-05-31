#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
	int facto ;

	if( n <= 1 ) return 1 ;

	facto = n*factorial( n - 1 ) ;
	return facto ;
}

int main() 
{
    int n ;
    cin >> n ;
    
    int result = factorial(n) ;
    
    cout << result << endl ;

    return 0 ;

}
