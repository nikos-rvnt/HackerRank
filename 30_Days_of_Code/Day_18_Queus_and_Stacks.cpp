#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
    //Write your code here
    protected:
        queue<char> myq ;
        stack<char> mys ;
    
    public:
        void pushCharacter( char ch1){
            mys.push(ch1) ;
        }
        void enqueueCharacter( char ch2){
            myq.push(ch2) ;
        }
        char popCharacter(){
            char tem = mys.top() ;
            mys.pop() ;
            return tem ;
        } 
        char dequeueCharacter(){
            char tem2 = myq.front() ;
            myq.pop() ;
            return tem2 ;
        }

};
