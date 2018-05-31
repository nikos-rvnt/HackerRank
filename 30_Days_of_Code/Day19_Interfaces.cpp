//Write your code here

class Calculator:public AdvancedArithmetic{
    public:
        Calculator(){}
        int divisorSum(int n){
            int sum = 0 ;
            for(int i=1; i<=n; i++){
                if(n%i==0)
                    sum = sum+i ;
            }
            return sum ;
        }
};
