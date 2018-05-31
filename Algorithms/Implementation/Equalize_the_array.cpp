#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector <int> arr) {
    // Complete this function
    vector<int> f(arr.size());
    int max = f[0];
    int what = 0 ;
    for(int i=0; i<arr.size();i++){
        for(int j=i+1; j<arr.size();j++){
            if(arr[i]==arr[j])
                f[i]++;
        }
        if(f[i]>=max){
            max = f[i];
            what = arr[i];
        }
        //cout << what << "EWEW";
    }
    int sum = 0;
    for(int i=0; i<f.size(); i++){
        if(f[i]<=max && arr[i]!=what)
            sum++;
        
    }
    
    if(sum==0 && arr[0]!=arr[2])
        sum = arr.size()-1;
   
    
    return sum ;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr);
    cout << result << endl;
    return 0;
}
