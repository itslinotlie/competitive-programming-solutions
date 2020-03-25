// 11/09/2019
//https://dmoj.ca/problem/ccc11j3
package CCC_11;

import java.util.*;
import java.io.*;

public class J3SumacSequences {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b = in.nextInt(), counter = 0;
        while (a-b >=0) {
            int c = a-b, temp = b;
            b = c; a = temp;
            counter ++; 
            if (b > a) break;
        }
        System.out.println(counter+2);
    }
}