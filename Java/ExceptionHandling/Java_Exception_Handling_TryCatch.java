import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sca = new Scanner(System.in);
        
        try{
            int x = sca.nextInt();
            int y = sca.nextInt();
            //int z = ;
            
            System.out.println(x/y);
        }catch(ArithmeticException ae){
            System.out.println(ae.toString());
        }catch(InputMismatchException ime){
            System.out.println(ime.getClass().getName());
        }        
        finally{
            sca.close();
        }
    }
}
