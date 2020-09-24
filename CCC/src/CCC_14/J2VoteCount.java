// 11/23/2019
//https://dmoj.ca/problem/ccc14j2
package CCC_14;

import java.util.*;
import java.io.*;

public class J2VoteCount {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(),a=0,b=0;
        String word = in.next().toUpperCase();
        for (int i=0;i<n;i++) {
            if (word.charAt(i)=='A')a++;
            else b++;
        }
        if (a>b) System.out.print("A");
        else if (b>a) System.out.print("B");
        else System.out.print("Tie");
    }
}
