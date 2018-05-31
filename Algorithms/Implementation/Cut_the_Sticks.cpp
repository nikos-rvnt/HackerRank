#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std ;

int main(){
    int n ;
    cin >> n ;
    vector<int> arr(n) ;
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i] ;
    }
    int megethos ;
    vector<int> theseis ;
    
    while(!arr.empty()){
        
        megethos = arr.size() ;    
        cout << megethos << endl ;
        
        int min = 50 ;
        for(int i=0; i<megethos; i++){
            if(arr[i]<min){
                min = arr[i] ;
            }
        }
        //cout << min << "min" ;
        for(int ari=0; ari<megethos; ari++){
            arr[ari] = arr[ari] - min ;
            if(arr[ari]==0){
                //arr.erase(arr.begin() + ari ) ;
                theseis.push_back(ari) ;
            }
        }
        
        for(int arj=0; arj<theseis.size(); arj++)
        while(!theseis.empty()){
            arr.erase(arr.begin() + theseis.back()) ;        
        
        
        //int th = theseis.size() ;
        //while(!theseis.empty()){
            theseis.pop_back() ;        
        }        
    }
    
    return 0 ;

}
