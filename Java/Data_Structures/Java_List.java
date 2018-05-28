import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int numEl = scan.nextInt();
        
        List lis = new ArrayList();
        for(int i=0; i<numEl; i++){
            int num = scan.nextInt();
            lis.add(num);
        }
        
        int numQ = scan.nextInt();
        for(int i=0; i<numQ; i++){
            
            String inDe = scan.next();
            if(Objects.equals( "Insert", inDe)){
                int ind = scan.nextInt();
                int val = scan.nextInt();
                lis.add( ind, val);
            }
            else{
                int indD = scan.nextInt();
                lis.remove(indD);
            }
            
        }
        
        for(int i=0; i<lis.size(); i++){
            System.out.print(lis.get(i)+" "); 
        }
        
    }
}
