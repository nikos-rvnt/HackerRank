/** ------------------------------------------------------------------------------------------------------------------------------
Given two strings on input compute on ouput the minimum number of changes (delete/add a letter) needed in the first string in 
order to become an anagram of the other string input.

Two words are anagrams of each other if the first word's letters can be rearranged to form the second word. So, the two strings
must have the same characters (in any order) and the same length.

sample input 0: cde
                abc

sample output 0: 4

because we need to delete 4 characters to make both strings anagram i.e. and from first string and and from second string. 
--------------------------------------------------------------------------------------------------------------------------------*/

#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std ;

int main() {
    
    char s1[10010], s2[10010];
    cin >> s1 >> s2;
    int a[26] = {0};
    
    for(int i = 0; i < strlen(s1); i++) {
        a[s1[i] - 'a']++;   
    }
    
    for(int i = 0; i < strlen(s2); i++) {
        a[s2[i] - 'a']--;
    }
    
    long long int ans = 0;
    for(int i = 0; i < 26; i++)
        ans += abs(a[i]) ;
    cout << ans << endl;
    
    return 0;
    
}
