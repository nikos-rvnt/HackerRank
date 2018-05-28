import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in1 = new Scanner(System.in);
        BigInteger A, B, adtn, mltplc ;
        A = in1.nextBigInteger();
        B = in1.nextBigInteger();

        adtn = A.add(B);
        mltplc = A.multiply(B);
        
        System.out.println(adtn);
        System.out.println(mltplc);
        
        in1.close();
    }
}
