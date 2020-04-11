//11/08/19
//https://dmoj.ca/problem/dmopc14c1p1
package DMOPC_14;

import java.util.*;

public class C1P1MedianMark {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        double a[] = new double [n], average = 0;
        for (int i=0;i<n;i++) a[i] = in.nextDouble();
        Arrays.sort(a);
        if (n%2==0) {
            average = (a[n/2-1] + a[n/2])/2;
            System.out.println((int)Math.round(average));
        }
        else {
            average = a[n/2];
            System.out.println((int)average);
        }
    }
}
