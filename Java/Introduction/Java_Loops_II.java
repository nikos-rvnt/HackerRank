import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            int sum = a ;
            for(int j=0;j<n;j++){
                //b *=2 ;
                sum += b ;
                b = b*2 ;
                System.out.print(sum+" ");
            }
            System.out.println();
        }
        in.close();
    }
}
