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
#include <exception>

using namespace std ;


int main()
{
    
    string st ;
    cin >> st ;
    string::size_type sz ;
    
    int str2inte ;
    
    try{
        str2inte = stoi( st, &sz) ;
        cout << str2inte ;
    }catch(...){
        cout << "Bad String" ;
    }
    
    return 0 ;
    
}
