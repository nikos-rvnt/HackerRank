#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    vector<int> stri ;
    stringstream ss1(str) ;
    char c1 ;
    int i=0 ;     
    while(ss1){
        //cout << str[i] << "+";
        if(i%2==0){
            int tt ;
            ss1 >> tt ;
            //cout << tt ;
            stri.push_back(tt) ;
        }
        else
            ss1 >> c1 ;     
        i++ ;
    }
    
    return stri ;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
