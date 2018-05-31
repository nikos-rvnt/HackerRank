#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numS ;
    //cout << "Dwste to plithos twn dianysmatwn :" << endl ;
    cin >> numS ;
    char ch1, ch2 ;

    string str;
    vector<string> vec1, vec2 ;
    //cout << endl << "Dwste to 1o string:" ;
    //while()

    for(int i=0; i<numS; i++)
    {
        if ( !(cin >> str) ) { /* error */ return 1; }

        vec1.push_back(str) ;

        for(int j=0; j<str.length(); j++)
        {
            if((j%2)==0){
                //ch1 = (char)str1[i] ;
                cout << str[j] ;
            }
        }

        cout << " " ;

        for(int j=1; j<str.length(); j++)
        {
            if((j%2)==1){
                cout << str[j] ;
            }
        }

        cout << endl ;

    }


    return 0 ;

}
