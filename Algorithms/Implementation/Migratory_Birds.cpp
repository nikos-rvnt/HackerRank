#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int c[5]={0} ;
    for(int i=0; i<ar.size(); i++){
       if(ar[i]==1)
           c[0]++ ;
       else if(ar[i]==2)
           c[1]++ ;
       else if(ar[i]==3)
           c[2]++ ;
       else if(ar[i]==4)
           c[3]++ ;
       else if(ar[i]==5)
           c[4]++ ;
    }
    int max = 0 ;
    int t = 1 ;
    for (int i=0; i<5; i++)
    {
        if(c[i]>max){
            max = c[i] ;
            t = i+1 ;
        }
    }
    return t ;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
