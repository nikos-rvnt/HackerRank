import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int [] array = new int[n];
        
        for(int i=0; i<n; i++){
            array[i] = in.nextInt();    
        }
        in.close();
        
        int sum = 0;
        for( int i=0; i<n; i++){
            int sumTemp=0;
            for( int j=i; j<n; j++){
                sumTemp = array[j] + sumTemp;
                if(sumTemp<0)
                    sum++ ;
            
            }
        }

        System.out.println(sum);
    }
}
