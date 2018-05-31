#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    string dmy ;
    int sum = 41;
 
    if(year == 1918)
        sum -= 15;
    else  if(year > 1918)
        sum -= ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)? 29 : 28;
    else 
        sum -= (year % 4 != 0) ? 28 : 29;
    
    //cout << sum << ".09." << year << endl;
    dmy = to_string(sum) + ".09." + to_string(year) ;
    return dmy;

}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
