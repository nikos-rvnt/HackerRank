#include <bits/stdc++.h>

using namespace std;

long int saveThePrisoner(int n, int m, int s){
    // Complete this function
    long int who ;
    //for(long int i=m; i<(m+s); i++){
        //if(i==(m+s-1))
            if((m+s-1)%n!=0)
                who = (m+s-1)%n ;
            else
                who = n ;

    return who ;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
