#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n ;
    cin >> n ;

    double pos, neg, zero ;
    int sumP = 0, sumN = 0, sumZ = 0 ;

    vector<int> arr(n) ;
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i] ;
    }

    for(int arr_i = 0; arr_i < n; arr_i++){
       if(arr[arr_i]>0){
           sumP++ ;
       }else if(arr[arr_i]<0){
           sumN++ ;
       }else if(arr[arr_i]==0){
           sumZ++ ;
       }
    }

    //cout << sumP << endl << sumN << endl << sumZ ;

    pos = (double)sumP/(double)arr.size() ;
    neg = (double)sumN/(double)arr.size() ;
    zero =  (double)sumZ/(double)arr.size() ;

    cout << pos << endl << neg << endl << zero ;

    return 0 ;

}
