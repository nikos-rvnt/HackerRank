import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for(int i=0; i < 6; i++){
            for(int j=0; j < 6; j++){
                arr[i][j] = in.nextInt();
            }
        }
        int max = -10000000;
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                int sum = 0;
                for(int z=i; z<(i+3); z++){
                    for(int y=j; y<(j+3); y++){
                        if(!((z==(i+1) && y==j) || (z==(i+1) && y==(j+2))))
                            sum = sum + arr[z][y];
                    
                    }
                }
                if(sum>max)
                    max = sum;
            }
        }
        System.out.println(max);
    }
}
