// 11/16/2019
//https://dmoj.ca/problem/primefactor
package pp7;

import java.util.*;
import java.io.*;

public class PrimeFactorization {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i=0;i<n;i++) {
            int temp = in.nextInt();
            primeFactor(temp);
        }
    }
    public static void primeFactor (int f) {
        String factors = "";
        for (int i=2;i<=(int)Math.sqrt(f);i++) {
            while (f%i==0){
                factors += i+" ";
                f/=i;
            }
        }
        if (f==1) System.out.println(factors.substring(0, factors.length()-1));
        else System.out.println(factors+f);           
    }
}
