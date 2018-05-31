#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
    int min = a[a.size() - 1] ;
    int max = b[0] ;
    int count = 0 ;
    int temp1, temp2 ;
    for(int i=min; i<=max; i++){
        
        temp1 = 0 ;
        for(int j=0; j<a.size(); j++){
            if(i%a[j]==0)
                temp1++ ;
        }
        
        temp2 = 0 ;
        for(int z=0; z<b.size(); z++){
            if(b[z]%i==0)
                temp2++ ;
        }
        //cout << temp1 << " - " << temp2 << endl ;
        if((temp1==a.size())&&(temp2==b.size()))
            count++ ;
    }
    
    return count ;
    
}

int main() {
    
    int n ;
    int m ;
    
    cin >> n >> m ;
    vector<int> a(n) ;
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i] ;
    }
    
    vector<int> b(m) ;
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i] ;
    }
    
    int total = getTotalX(a, b) ;
    cout << total << endl ;
    return 0 ;
    
}
