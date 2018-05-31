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
    
    int q;
    cin >> q;
    int dis[q][3] = {0} ;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        dis[a0][0] = x ;
        dis[a0][1] = y ;
        dis[a0][2] = z ;
    }
    
    for(int a1=0; a1<q; a1++){
        if(abs(dis[a1][0] - dis[a1][2]) > abs(dis[a1][1] - dis[a1][2]))
            cout << "Cat B" << endl ;
        else if(abs(dis[a1][0] - dis[a1][2]) < abs(dis[a1][1] - dis[a1][2]))
            cout << "Cat A" << endl ;
        else
            cout << "Mouse C" << endl ;
    }
    
    
    return 0 ;
    
}
