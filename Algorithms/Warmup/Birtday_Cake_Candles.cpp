#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int max=0, count =0 ;
    for(int ar_i = 0; ar_i < ar.size(); ar_i++){
       if(ar[ar_i]>max)
           max = ar[ar_i] ;
    }
    for(int ar_i = 0; ar_i < ar.size(); ar_i++){
        if(ar[ar_i]==max)
            count++;
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
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
