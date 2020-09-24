// 11/06/2019
//https://dmoj.ca/problem/dmopc14c1p3
package DMOPC_14;

import java.util.*;
import java.io.*;

public class C1P3NewStudents {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        double sum = 0;
        for (int i=0;i<n;i++) sum += in.nextInt();
        int nn = in.nextInt();
        for (int i=n+1;i<nn+n+1;i++) {
            sum += in.nextInt();
            System.out.printf("%.3f",sum/i);
            System.out.println();
        }
        
    }
}
