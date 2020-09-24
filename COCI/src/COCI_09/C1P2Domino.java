// 11/09/19
// https://dmoj.ca/problem/coci09c1p2
package COCI_09;

import java.util.*;
public class C1P2Domino {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), total = 0;
        for (int i=0;i<=n;i++) {
            for (int j=i;j<=n;j++) {
                total += i + j;
            }
        }
        System.out.println(total);
    }  
}
