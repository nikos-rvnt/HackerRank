import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner inp = new Scanner(System.in);
        int numB = inp.nextInt();
        int numOp = inp.nextInt();
        
        BitSet bits1 = new BitSet(5);
        BitSet bits2 = new BitSet(5);
        
        for(int i=0; i<numOp; i++){
            
            String oper = inp.next();
            int op1 = inp.nextInt();
            int op2 = inp.nextInt();
            int asos1, asos2; 
            
            
            if(oper.equals("AND")){    
                if(op1==1)
                    bits1.and(bits2);
                else
                    bits2.and(bits1);
                
            }else if(oper.equals("SET")){
                if(op1==1)
                    bits1.set(op2);
                else
                    bits2.set(op2);
                
            }else if(oper.equals("FLIP")){
                if(op1==1)
                    bits1.flip(op2);
                else
                    bits2.flip(op2);
                
            }else if(oper.equals("OR")){
                if(op1==1)
                    bits1.or(bits2);
                else
                    bits2.or(bits1);
                
            }else if(oper.equals("XOR")){
                if(op1==1) 
                    bits1.xor(bits2);
                else 
                    bits2.xor(bits1);
            }
                
            asos1 = bits1.cardinality();
            asos2 = bits2.cardinality();
            
            System.out.println(asos1+" "+asos2);
            
        }
        inp.close();
        
    }
}
