#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int age ;
        string fname ;
        string lname ;
        int stand ;
    public:
        void set_age( int a ){
            age = a ;
        }
        int get_age(){
            return age ;
        }
        void set_first_name(string fn){
            fname = fn ;
        }
        string get_first_name(){
            return fname ;
        }
        void set_last_name(string ln){
            lname = ln ;
        }
        string get_last_name(){
            return lname ;
        }
        void set_standard(int st){
            stand = st ;
        }
        int get_standard(){
            return stand ;
        }
        string to_string(){
            std::stringstream sout ;
            string sback ;
            sout << get_age() << "," << get_first_name() << "," << get_last_name() << "," << get_standard() ;
            sout >> sback ;
            return sback ;  
        }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
