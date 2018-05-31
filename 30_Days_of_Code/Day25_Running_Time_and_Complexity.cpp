#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std ;
bool isP(int nums)
{
   for (int i = 2; i <= sqrt(nums); i++){
        if (nums%i == 0)
             return false ;
        }
        return true ;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numt ;
    cin >> numt ;
    
    //long  nums ;
    for(int i=0; i<numt; i++){
        long int nums ;
        cin >> nums ;
        
        /*int whetP = 0 ;
        //if(nums[i]==1 || nums[i]==0){
        //    cout << "Not prime" << endl ;
        //    continue ;
        //}
        if (nums <= 3){
            cout << "Prime" << endl ;
            continue ;
        }
        else if ((nums%2 == 0) || (nums%3 == 0)){
            cout << "Not prime" << endl ;
            continue ;
        }
        
        long temp = 5 ;
        while ((temp*temp) <= nums){
            if ((nums%temp == 0) || (nums%(temp + 2) == 0))
                whetP++ ;
            temp = temp + 6 ;
        }
        if(whetP>=1) 
            cout << "Not prime" << endl ;
        else 
            cout << "Prime" << endl ;
        /*
        for(long  j=2; j<=nums[i]; j++){
            if(nums[i]%j==0)
                whetP++ ;
        }
        if(whetP!=1) { cout << "Not prime" << endl ; }
        else { cout << "Prime" << endl ; }
        
    } */

    //bool isP = true ;

    if (nums >=2 && isP(nums)){
        cout << "Prime" << endl ;
    }
    else{
        cout << "Not prime" << endl ;

    }
    }
    return 0 ;
}
