
class MyCalculator {
    /*
    * Create the method long power(int, int) here.
    */
    long power(int a,int b) throws Exception{
        if(a<0 || b<0)
            throw new Exception("n or p should not be negative.");
        if(a==0 && b==0)
            throw new Exception("n and p should not be zero.");
    
        long powe = 1;
        for(int i=1;i<=b;i++) { powe *= a;}
        return powe;
    }
    
    
}
