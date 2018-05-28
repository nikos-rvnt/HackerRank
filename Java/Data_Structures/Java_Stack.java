import java.util.*;

class Solution{
   
   public static void main(String []argh)
   {
      Scanner sc = new Scanner(System.in);
      Stack st = new Stack();
      
      while (sc.hasNext()) {
         String input=sc.next();
         Stack<Character> sti = new Stack<>();
         
         for(int i=0; i<input.length(); i++){
         
             if(!sti.isEmpty()){                 
                 if(input.charAt(i)=='}'){
                     if(sti.peek()=='{')
                         sti.pop();
                 }else if(input.charAt(i)==')'){
                     if(sti.peek()=='(')
                         sti.pop();                     
                 }else if(input.charAt(i)==']'){
                     if(sti.peek()=='[')
                         sti.pop();
                 }else{
                     sti.push(input.charAt(i));    
                 }                   
             }
             else{
                 sti.push(input.charAt(i));    
             }
             
         }
         System.out.println(sti.isEmpty()); 
      }
      
   }
}
