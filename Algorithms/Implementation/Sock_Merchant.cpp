#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    int count = 0 ;
    int i = 0 ;    
    int j = 1 ;
    //while(ar.size()){
    sort( ar.begin(), ar.end()) ;
    for(int i=0; i<ar.size(); i++){    
        if(ar[i]==ar[i+1]){
            count++ ;
            ar[i+1] = -1 ;
            //ar.erase(ar.begin()+i) ;
            //ar.erase(ar.begin()+j) ;
        }
    }
  
    return count ;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
