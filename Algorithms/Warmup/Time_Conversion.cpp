#include<sstream>
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

string timeConversion(string s) {
        istringstream is(s);
        int hours;
        int minutes;
        int seconds;
        string ampm;
        char colon;
        is >> hours >> colon >> minutes >> colon >> seconds >> ampm;
        if(is.fail()) {
                return "Error: wrong format";
        }
        ostringstream os;
        if(ampm == "PM" && hours<12){
            hours += 12 ;
        }
        if(ampm == "PM" && hours == 12){
            hours = 12 ;
        }
        if(ampm == "AM" && hours == 12){
            hours = 00 ;
        }
        os
        << setfill('0') << setw(2)
        << hours << ':'
        << setfill('0') << setw(2)
        << minutes << ':'
        << setfill('0') << setw(2)
        << seconds;
        return os.str();
}

int main() 
{
    string s ;
    cin >> s ;

    string result = timeConversion(s) ;
    cout << result << endl ;

    return 0 ;

}
