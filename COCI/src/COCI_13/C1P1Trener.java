// 12/27/2019
// https://dmoj.ca/problem/coci13c1p1
package COCI_13;

import java.util.*;
import java.io.*;

public class C1P1Trener {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[26];
        for (int i=0;i<n;i++) {
            char temp = in.next().charAt(0);
            arr[(int)temp-97]+=1;
        }
        boolean out = true;
        for (int i=0;i<26;i++) {
            if (arr[i]>=5) {
                System.out.print((char)(i+97));
                out = false;
            }
        }
        if (out) System.out.println("PREDAJA");
    }
}