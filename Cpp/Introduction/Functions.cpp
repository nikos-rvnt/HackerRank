#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    //int arr[4] = { a, b, c, d} ;
    int max = a ;
    if(b>max)
        max = b ;
    if(c>max)
        max = c ;
    if(d>max)
        max = d ;
    /*
    for (int i=1;i<4;i++)
    {
        if(arr[i]>arr[i-1])
            max = arr[i] ;
        
    }*/
    
    return max ;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
