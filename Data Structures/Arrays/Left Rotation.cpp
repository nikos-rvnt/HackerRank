#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {
    // Complete this function
    int temp1, temp2, cntemp ;
    /*for(int di=1; di<=d; di++){
        temp2 = a[a.size()-1] ;
        //cntemp = 0 ;
        for(int vi=(a.size()-1); vi>0; vi--){    
                temp1 = a[vi-1] ;
                a[vi-1] = temp2 ;
                temp2 = temp1 ;
        }
        a[a.size()-1] = temp2 ;
    }*/
    
    return a ;
    
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[(a_i+n-d)%n];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
