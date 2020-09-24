// 01/13/2020
//https://dmoj.ca/problem/ccc10j4
package CCC_10;

import java.util.*;
import java.io.*;

public class J4GlobalWarming {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        while (n!=0) {
            int arr[] = new int[n], diff[] = new int[n-1];
            ArrayList<Integer> al = new ArrayList<>();
            for (int i=0;i<n;i++) arr[i] = in.nextInt();
            for (int i=0;i<n-1;i++) diff[i] = arr[i+1]-arr[i];
            
            int temp = 0;
            boolean out = true;
            for (int i=0;i<n-1;i++) {
                al.add(diff[i]);
                for (int j=0;j<n-1;j++) {
                    if (al.get(j%al.size())!=diff[j]) break;
                    temp = j;
                }
                if (temp == n-2) {
                    System.out.println(al.size());
                    out = false;
                    break;
                }
            }
            if (out) System.out.println(al.size());
            n = in.nextInt();
        }
    }
}
