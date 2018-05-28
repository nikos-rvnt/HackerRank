import java.io.*;
import java.util.*;
import java.util.ArrayList;

public class Solution {

    public static void main(String[] args) 
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
            Scanner in = new Scanner(System.in);
    int nums = in.nextInt();
    int d,quer, q1, q2;
    ArrayList[] set = new ArrayList[nums];
        for(int i=0;i<nums;i++){
            d = in.nextInt();
            set[i] = new ArrayList();
            for(int j=0;j<d;j++){  
                set[i].add(in.nextInt());                
            }
        }
        
        quer = in.nextInt();
        for(int i=0;i<quer;i++){
            q1 = in.nextInt();
            q2 = in.nextInt();
            try{
                System.out.println(set[q1-1].get(q2-1));
            } catch(Exception e){
                System.out.println("ERROR!");
            }
        }
    }
}
