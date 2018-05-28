import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution{
   public static void main(String[] args){
      
      Scanner in = new Scanner(System.in);
      int testCases = Integer.parseInt(in.nextLine());
      while(testCases>0){
         String line = in.nextLine();
         
         boolean vrethike = false;
         Pattern pat = Pattern.compile("<(.+)>([^<]+)</\\1>");
         Matcher mat = pat.matcher(line);

         while (mat.find()) {
            System.out.println(mat.group(2));
            vrethike = true;
         }
         if ( ! vrethike) {
            System.out.println("None");
         }
         
         testCases--;
      }
   }
}
