// 03/07/2020
// https://dmoj.ca/problem/coci06c3p2
package COCI_06;

import java.util.*;
import java.io.*;

public class C3P2NPuzzle {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String a[] = new String[4], b[] = {"ABCD", "EFGH", "IJKL", "MNO#"};
        for (int i=0;i<4;i++) a[i] = in.nextLine();
        int cnt = 0;
        for (int r1=0;r1<4;r1++) {
            for (int s1=0;s1<4;s1++) {
                for (int r2=0;r2<4;r2++) {
                    for (int s2=0;s2<4;s2++) {
                        if (a[r1].charAt(s1)==b[r2].charAt(s2)) {
                            cnt += Math.abs(r2-r1) + Math.abs(s1-s2);
                        }
                    }
                }
            }
        }
        System.out.println(cnt);
    }
}
