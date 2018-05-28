import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
  
    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "" ;
        
        //String [] subs = new String[s.length()-k+1];
        SortedSet<String> sets = new TreeSet<String>();
        for( int i=0; i<(s.length()-k+1); i++){
            //subs[i] = s.substring(i,i+3);    
            sets.add(s.substring(i,i+k));
        }
        
        //Arrays.sort(subs);
        smallest = sets.first();
        largest = sets.last();
        
        return smallest + "\n" + largest;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
