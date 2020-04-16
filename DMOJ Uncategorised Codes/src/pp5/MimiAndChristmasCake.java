// 11/19/2019
//https://dmoj.ca/problem/year2018p2
package pp5;

import java.util.*;
import java.io.*;

public class MimiAndChristmasCake {
    public static boolean isPrime (int a) {
        int root = (int)Math.sqrt(a); 
        if (a==1) return false;
        if (a==2) return true;
        if (a==3) return true;
        if (a%2==0) return false;
        for (int i=3;i<=root;i+=2) {
            if (a%i==0) return false;
        } return true;
    }
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), counter = 0;
        for (int i=0;i<n;i++) {
            if (isPrime(in.nextInt()))counter++;
        } 
        System.out.println(counter);
    }
}
