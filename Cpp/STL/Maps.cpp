#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numQ ;
    cin >> numQ ;
    
    map<string,int> grades ;
    int type, gra ;
    string name ;
    for(int i=0; i<numQ; i++){
        cin >> type ;
        if(type==1){
            cin >> name ;
            cin >> gra ;
            //grades.insert(make_pair(name,gra)) ;
            grades[name] = grades[name] + gra ;
        }
        else if(type==2){
            cin >> name ;
            grades.erase(name) ;
        }
        else if(type==3){
             cin >> name ;
             map<string,int>::iterator itr=grades.find(name);
             if(itr!=grades.end())
                 cout << itr->second << endl ;
             else
                 cout << "0" << endl ;
        }
    }
    
    return 0 ;
    
}
