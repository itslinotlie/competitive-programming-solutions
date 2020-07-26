// 12/26/2019
// https://dmoj.ca/problem/coci14c1p2
package COCI_14;

import java.util.*;
import java.io.*;

public class C1P2Klopka {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), x1=Integer.MAX_VALUE, y1=Integer.MAX_VALUE, y2=Integer.MIN_VALUE, x2=Integer.MIN_VALUE;
        for (int i=0;i<n;i++) {
            int a = in.nextInt(), b = in.nextInt();
            if (a < x1) x1=a;
            if (a > x2) x2=a;
            if (b < y1) y1=b;
            if (b > y2) y2=b;
        }
        int temp = Integer.max(x2-x1, y2-y1);
        System.out.println(temp*temp);
    }
}