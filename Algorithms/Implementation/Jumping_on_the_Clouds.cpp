#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c) {
    // Complete this function
    int jumpRnd = 0, t = 0;
    for(int i=0; i<(c.size());i++){
        if(c[i+1]==1){
            //t = t + 2;
            i++;
            jumpRnd++;
        }
        else if(c[i+1]==0 && c[i+2]==0 && (i+1)<=(c.size()-1) && (i+2)<=(c.size()-1)){
            //t = t + 2;
            
            i++;
            jumpRnd++;
        }
        else if(c[i+1]==0 && c[i+2]==1 && (i+1)<=(c.size()-1) && (i+2)<=(c.size()-1)){
            //t++;
            jumpRnd++;
        }          
        else if(i==(c.size()-2)){
            jumpRnd++;
        }
            
    }
    return jumpRnd;
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c);
    cout << result << endl;
    return 0;
}
