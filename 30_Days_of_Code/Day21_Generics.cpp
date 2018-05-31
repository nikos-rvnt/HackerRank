/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here

template <class T>
void printArray(vector<T> vect){
    //T result ;
    for( int i=0; i<vect.size(); i++){
        cout << vect[i] ;
        cout << endl ;    
    }        
}
