import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                //Complete this line
                //String [] kena = new String[] ; 
                while(s1.length()<15){
                    s1 = s1 + " " ;
                }
                if(x%10==x){
                    System.out.println(s1+"00"+x);
                }
                else if(x%100==x){
                    System.out.println(s1+"0"+x);
                    
                }
                else{
                    System.out.println(s1+x);
                }
            }
            System.out.println("================================");

    }
}
