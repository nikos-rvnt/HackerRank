#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, sum1 = 0, sum2 = 0, absDif = 0 ;
    //cout << "Dwste to plithos grammwn/stilwn" << endl ;
    cin >> n ;

    vector< vector<int> > a(n,vector<int>(n)) ;
    for(int a_i = 0; a_i < n; a_i++)
    {
       for(int a_j = 0; a_j < n; a_j++)
       {
          cin >> a[a_i][a_j] ;
       }
    }

    for(int a_i = 0; a_i < n; a_i++)
    {
       for(int a_j = 0; a_j < n; a_j++)
       {
           if(a_i==a_j)
               sum1 = sum1 + a[a_i][a_j] ;
       }
    }

    for(int a_i = n-1; a_i >= 0; a_i--)
    {
       for(int a_j = 0; a_j < n; a_j++)
       {
            if((a_i+a_j)==(n-1))
                sum2 = sum2 + a[a_i][a_j] ;
       }
    }

    if(sum1-sum2>=0)
        absDif = sum1 - sum2 ;
    else
        absDif = - (sum1 - sum2) ;

    cout << absDif ;

    return 0 ;

}
