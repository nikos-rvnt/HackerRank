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
    
    vector< vector<int> > arr(6,vector<int>(6)) ;
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int max = -50 ;
    int sum ;
    for(int arr_i=0; arr_i<4; arr_i++){
        for(int arr_j=0; arr_j<4; arr_j++){
            sum = 0 ;
            for(int ti=0; ti<3; ti++){
                for(int tj=0; tj<3; tj++){
                    if(ti!=1)
                        sum = sum + arr[arr_i+ti][arr_j+tj] ;
                }
            }
            sum = sum + arr[arr_i+1][arr_j+1] ;
            if(sum>max)
                max = sum ;
        }
    }
    cout << max ;
    
    return 0 ;
    
}
