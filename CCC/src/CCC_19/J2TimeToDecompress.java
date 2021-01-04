// 11/11/2019
// https://dmoj.ca/problem/ccc19j2
package CCC_19;

import java.util.*;
import java.io.*;

public class J2TimeToDecompress {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i=0;i<n;i++) {
            int temp = in.nextInt();
            String temp2 = in.next();
            for (int j=0;j<temp;j++) {
                System.out.print(temp2);
            }
            System.out.println();
        }
    }
}
