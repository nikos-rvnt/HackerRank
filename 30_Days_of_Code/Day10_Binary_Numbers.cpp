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


int main()
{

    int repeat=0,count1=0,max1=0, temp=0 ;
    long n ;
    cin >> n ;
    std::stack<int> binNum ;

    while(n>0)
    {
        binNum.push(n%2) ;
        n=n/2 ;
    }

    while(!binNum.empty())
    {
        //cout << binNum.top() << endl ;
        if( binNum.top()==1 )
        {

            count1++;
            if(repeat>=count1)
            {
                if(repeat>max1)
                    max1=repeat;
            }
            else
            {
                if(count1>max1)
                    max1 = count1 ;
            }
            repeat = count1 ;
            binNum.pop() ;
        }
        else if( !binNum.empty() && binNum.top()==0)
        {
            count1 = 0 ;
            binNum.pop() ;
        }
        else
        {
            binNum.pop();
        }
    }

    cout<<max1 ;

    return 0 ;

}
