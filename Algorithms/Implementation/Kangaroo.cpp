#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    string yn ;
    if(x1<x2 && v1>v2){
        while(x1<x2){
            x1 = x1 + v1 ;
            x2 = x2 + v2 ; 
        }
        if(x1==x2)
            yn = "YES" ;
        else
            yn = "NO" ;
    }
    else if(x1>x2 && v1<v2){
        while(x1>x2){
            x1 = x1 + v1 ;
            x2 = x2 + v2 ; 
        }
        if(x1==x2)
            yn = "YES" ;
        else
            yn = "NO" ;
    }
    else{
        yn = "NO" ;
    }
        
        return yn ;
}

int main() {
    
    int x1 ;
    int v1 ;
    int x2 ;
    int v2 ;

    cin >> x1 >> v1 >> x2 >> v2 ;
    string result = kangaroo(x1, v1, x2, v2) ;
    cout << result << endl ;
    
    return 0;

}
