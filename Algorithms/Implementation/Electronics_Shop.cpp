#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function
    int maxCost = -1 ;
    
    int sum = 0 ;
    for(int i=0; i<keyboards.size(); i++){
        for(int j=0; j<drives.size(); j++){
            if((keyboards[i]+drives[j]<=s) && (keyboards[i]+drives[j]>sum))
                sum = keyboards[i]+drives[j] ;
        }
    }
    
    if(sum!=0)
        maxCost = sum ;

    return maxCost ;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
