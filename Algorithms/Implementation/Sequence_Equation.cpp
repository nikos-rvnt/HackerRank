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

using namespace std ;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num ;
    cin >> num ;
    
    vector<int> nums(num) ;
    for(int n_i=0; n_i<num; n_i++){
        cin >> nums[n_i] ;
    }
    
    for(int n_i=1; n_i<=num; n_i++){
               
        for(int n2=0; n2<num; n2++){
            if(n_i==nums[n2]){
                for(int n3=0; n3<num; n3++){
                    if(nums[n2]==nums[nums[n3]-1])
                        cout << n3+1 << endl ;
                }
            }
        }
    }
    
    
    return 0 ;
    
}
