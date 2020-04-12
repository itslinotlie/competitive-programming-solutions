// 11/19/2019
//https://dmoj.ca/problem/dwite07c5p3
package DWITE_07;

import java.util.*;
import java.io.*;

public class R5P3ParityBit {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        for (int i=0;i<5;i++) {
            int n = in.nextInt();
            String temp = Integer.toBinaryString(n);
            int counter = 0;
            for (int j=0;j<temp.length();j++) if (temp.charAt(j)=='1')counter++;
            if (counter%2==0) System.out.println("0");
            else System.out.println("1");
        }
    }
}
