//Write your code here
class MyCalculator implements AdvancedArithmetic{
    public int divisor_sum(int n){
        //ArrayList divs = new ArrayList();
        int sum = 0;
        for(int i=1; i<=n; i++){
            if(n%i==0)
                sum += i;
                //divs.add(i);
        }
        return sum;
    }
    
    
}
