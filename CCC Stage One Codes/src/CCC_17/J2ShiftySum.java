//9/19/19
//https://dmoj.ca/problem/ccc17j2
package CCC_17;

import java.util.Scanner;
import java.math.*;
public class J2ShiftySum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt(), K = in.nextInt();
        double total = 0;
        
        for (int i=0;i<K+1;i++) {
            total += N*Math.pow(10, i);
        }
        
        System.out.print((int)total);
    }
    
}
