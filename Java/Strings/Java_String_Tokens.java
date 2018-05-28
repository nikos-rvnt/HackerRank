import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        if(!scan.hasNext()) { System.out.print("0"); return; }
        String s = scan.nextLine();
        
        //scan.close();
        
        /*int sum = 0;
        for(String retval: s.split("[ !,?._'@]+")){
            sum++;
        }*/
        
        String []toks = s.trim().split("[ !,?._'@]+");
        
        if(s.length()==0)
            System.out.println("0");
        if(s.length() > 400000)
            return ;    
        else    
            System.out.println(toks.length);
        
        for(String toktok : toks){
            System.out.println(toktok);
        }
          
        scan.close();

    }
}
