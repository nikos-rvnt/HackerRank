#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std ;

int main()
{
    int a,b ;
    scanf("%d") ;
    while(scanf("%d%d",&a,&b)>0)
        printf("%d\n",(int)(floor(sqrt(b)) - ceil(sqrt(a))+1)) ;
}
