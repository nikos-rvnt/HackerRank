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
    
    int t ;
    cin >> t ;
    
    int nums[t][2] ;
    for(int a0 = 0; a0 < t; a0++){
        int n ;
        int k ;
        cin >> n >> k ;
        nums[a0][0] = n ;
        nums[a0][1] = k ;
    }
    
    //int max = 0 ;
    for(int a0=0; a0<t; a0++){
        int max = 0 ;
        for(int a1=1; a1<=nums[a0][0]; a1++){
            for(int a2=a1+1; a2<=nums[a0][0]; a2++){
                int temp = a1 & a2 ;
                if(temp<nums[a0][1] && temp>max)
                    max = temp ;
            }
        }
        cout << max << endl ;
    }
                   
    return 0 ;
    
}
