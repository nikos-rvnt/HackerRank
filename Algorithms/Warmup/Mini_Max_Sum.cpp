#include <bits/stdc++.h>

using namespace std;

int main() 
{
    vector<int> arr(5) ;
    long int sums[5] ;
    long int min=0, max=0 ;
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       cin >> arr[arr_i] ;
    }
    
    for(int i = 0; i < 5; i++)
    {
        sums[i] = 0 ;
        for(int j = 0; j < 5; j++)
        {
            if(j!=i)    
                sums[i] = sums[i] + arr[j] ;
        }    
        //cout << sums[i] ;

    }
    
    min = sums[0] ;
    max = sums[0] ;
    for(int i = 1; i < 5; i++)
    {
        if(sums[i]>max)
            max = sums[i] ;
           
        if(sums[i]<min)
            min = sums[i] ;
    }
    
    cout << min << " " << max ;
    
    return 0 ;
    
}
