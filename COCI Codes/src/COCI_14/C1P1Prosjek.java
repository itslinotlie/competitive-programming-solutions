// 12/26/2019
// https://dmoj.ca/problem/coci14c1p1
package COCI_14;

import java.util.*;
import java.io.*;

public class C1P1Prosjek {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int[n], sum=0;
        for (int i=1;i<=n;i++) {
            arr[i-1] = in.nextInt();
            if (i==1) {
                sum+=arr[i-1];
                System.out.print(arr[i-1]+" ");
            }
            else {
                System.out.print(i*arr[i-1]-sum+" ");
                sum+=i*arr[i-1]-sum;
            }
        }
    }
}