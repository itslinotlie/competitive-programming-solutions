// 11/09/2019
//https://dmoj.ca/problem/ccc11j2
package CCC_11;

import java.util.*;
import java.io.*;

public class J2WhoHasSeenTheWind {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int h = in.nextInt(), m = in.nextInt();
        boolean test = true;
        for (int i=1;i<m && test;i++) {
            if (-6*Math.pow(i, 4)+h*Math.pow(i, 3)+2*Math.pow(i, 2)+i <=0) {
                System.out.println("The balloon first touches ground at hour:" );
                System.out.println(i);
                test = false;
            }
        }
        if (test==true) System.out.println("The balloon does not touch ground in the given time.");
                
    }
}