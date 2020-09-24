// 12/26/2019
// https://dmoj.ca/problem/coci15c3p1
package COCI_15;

import java.util.*;
import java.io.*;

public class C3P1Pot {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int[n], total = 0;
        for (int i=0;i<n;i++) {
            arr[i] = in.nextInt();
            String a = Integer.toString(arr[i]);
            String temp = a.substring(0, a.length()-1);
            total+=Math.pow(Integer.parseInt(temp), Integer.parseInt(Character.toString(a.charAt(a.length()-1))));
        }
        System.out.println(total);
    }
}
