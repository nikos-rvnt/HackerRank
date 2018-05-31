#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int s;
    int t;
    // s->arxh , t->telos spitiou
    cin >> s >> t;
    int a;
    int b;
    // a-> mhlia , b->portokalia
    cin >> a >> b;
    int m;
    int n;
    // m-> #mhla , n-># portokalia
    cin >> m >> n;
    
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    
    vector<int> appFall(m) ;
    int countApp = 0 ;
    for(int i=0; i<m; i++){
        appFall[i] = a + apple[i] ;
        if(appFall[i]>=s && appFall[i]<=t)
            countApp++ ;
    }
    cout << countApp << endl ;
    
    vector<int> oraFall(n) ;
    int countOra = 0 ;
    for(int j=0; j<n; j++){
        oraFall[j] = b + orange[j] ;
        if(oraFall[j]<=t && oraFall[j]>=s)
            countOra++ ;
    }
    cout << countOra << endl ;
    
    return 0 ;
    
}
