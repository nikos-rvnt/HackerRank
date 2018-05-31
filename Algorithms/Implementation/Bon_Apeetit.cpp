#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function
    int sum = 0 ;
    int back ;
    string bona = "Bon Appetit" ;    
    string::size_type sz ;   // alias of size_t

    for(int i=0; i<ar.size(); i++){
        if(i!=k)
            sum = sum + ar[i] ;
    }
    if(sum/2==b)
        back = 0 ; //atoi( bona.c_str()) ;     
    else
        back = -sum/2+b ;       

    return back ;
}

int main() {

    int n ;
    int k ;
    cin >> n >> k ;
    
    vector<int> ar(n) ;
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i] ;
    }
    
    int b ;
    cin >> b ;
    int result = bonAppetit(n, k, b, ar) ;
    if(result!=0)
        cout << result << endl ;
    else
        cout << "Bon Appetit" ;
        
    return 0 ;

}
