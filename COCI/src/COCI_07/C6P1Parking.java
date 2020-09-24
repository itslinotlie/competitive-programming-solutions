// 12/27/2019
// https://dmoj.ca/problem/coci07c6p1
package COCI_07;

import java.util.*;
import java.io.*;

public class C6P1Parking {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int max = 100;
        int one = in.nextInt(), two = in.nextInt(), three = in.nextInt();
        int arr[] = new int[max+2];
        for (int i=0;i<3;i++) {
            arr[in.nextInt()]+=1;
            arr[in.nextInt()]-=1;
        }
        for (int i=1;i<=max;i++) arr[i]+=arr[i-1];
        int total = 0;
        for (int i=1;i<=max;i++) {
            switch (arr[i]) {
                case 1: total += one; break;
                case 2: total += two*2; break;
                case 3: total += three*3; break;
                default: break;
            }
        }
        System.out.println(total);
    }
}