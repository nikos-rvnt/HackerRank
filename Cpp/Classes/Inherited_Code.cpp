/* Define the exception here */
class BadLengthException{
    private:
        int n ;
    public:
        int what(){
            return n ;
        }
        BadLengthException(int ni){
            n = ni ;
        }
    
};
