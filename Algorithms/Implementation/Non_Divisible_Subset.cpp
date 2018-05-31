#include <bits/stdc++.h>

using namespace std;

int nonDivisibleSubset(int k, vector <int> arr) {
    // Complete this function
    int posa = 0;
    vector<int> ypo(k);
    for(int i=0; i<arr.size(); i++){
        int temp = arr[i]%k ;
        ypo[temp]++ ;
    }
    
    posa = posa + ((ypo[0]>0) ? 1 : 0) ;
    posa = posa + ((k%2==0 && ypo[k/2]>0) ? 1 : 0) ;
    for(int i=1; i<static_cast<float>(k)/2; i++){
        posa = posa + max(ypo[i],ypo[k-i]) ;
    }
    //cout << sum;
    
    return posa;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = nonDivisibleSubset(k, arr);
    cout << result << endl;
    return 0;
}
