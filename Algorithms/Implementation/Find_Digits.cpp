#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s1 ;
    
    for(int a0 = 0; a0 < t; a0++){
        int count = 0 ;
        int n;
        cin >> n;
        s1 = to_string(n) ;
        for(int i=0; i<s1.length(); i++){
            int num ;
            num = s1[i]%48 ;
            if(num!=0){
                if(n%num==0)
                    count++ ;
            }
        }
        cout << count << endl ;
    }
    return 0;
}
