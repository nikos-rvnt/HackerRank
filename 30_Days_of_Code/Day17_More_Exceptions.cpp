//Write your code here

class Calculator {
  public:
    int power( int a1, int a2){
        if(a1<0 || a2<0){
            throw runtime_error( "n and p should be non-negative" ) ;
        }
        return pow(a1,a2) ;
    } 
};
