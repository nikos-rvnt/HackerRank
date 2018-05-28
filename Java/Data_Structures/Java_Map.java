//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
   public static void main(String []argh)
   {
      Map telefwna = new HashMap();
      Scanner in = new Scanner(System.in);
      int n=in.nextInt();
      in.nextLine();
       
      for(int i=0;i<n;i++)
      {
         String name=in.nextLine();
         int phone=in.nextInt();
         telefwna.put( name, phone);
         in.nextLine();
      }
       
      while(in.hasNext())
      {
         String s=in.nextLine();
         if( telefwna.containsKey(s) )
	          System.out.println(s+"="+telefwna.get(s)) ;
         else
              System.out.println("Not found");
      }
       
   }
}
