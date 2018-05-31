#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

//typedef map<string,int> phoneBook ;
//typedef pair<string,int>* pbPair ;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //phoneBook pb ;
    int num ;

    //cout << "Dwste to plithos twn anazitisewn pou thelete :" << endl ;
    cin >> num ;

    string strNum[num], strtemp ;
    int pbInt[num], pbtemp ;
    string qtemp ;

    map<string,int> mypb ;
    map<string,int>::iterator temp2 ;
    pair<string,int> pbPair ;

    //cout << "Dwste tis kataxwrhseis tou katalogou :" << endl ;
    for( int i=0; i<num; i++)
    {
        cin >> strNum[i] ;
        cin >> pbInt[i] ;

        strtemp = strNum[i] ;
        pbtemp = pbInt[i] ;
        mypb[strtemp] = pbtemp ; //.insert( pbPair( strtemp, pbtemp)) ;
    }

    vector<string> q ;

    //cout << "Dwste ta onomata twn anazitisewn pou thelete :" << endl ;
    while( cin >> qtemp)  //  for( int i=0; i<num; i++)
    {
        //cin >> qtemp ;
        q.push_back(qtemp) ;
    }

    for(unsigned i=0; i<q.size(); i++)
    {
        qtemp = q[i] ;
        if( mypb.count(qtemp)==0 )
        {
            cout << "Not found" << endl ;
        }
        else
        {
            temp2 = mypb.find(qtemp) ;
            cout << temp2->first << "=" << temp2->second << '\n' ;
        }
    }

    return 0 ;

}
