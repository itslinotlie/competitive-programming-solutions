// 11/16/2019
//https://dmoj.ca/problem/phantom1
package pp5;

import java.util.*;
import java.io.*;
public class TheMirror {
    public static boolean isPrime (int a) {
        int root = (int)Math.sqrt(a);     
        if (a%2==0) return false;
        for (int i=3;i<=root;i+=2) {
            if (a%i==0) return false;
        } return true;
    }
    public static int prime (int l, int h) {
        int counter = 0;
        for (int i=l;i<h;i++) {
            if (isPrime(i)) counter ++;
        }
        return counter;
    }
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i=0;i<n;i++) {
            int low = in.nextInt(), high = in.nextInt();
            System.out.println(prime (low, high));
        }
    }
}
