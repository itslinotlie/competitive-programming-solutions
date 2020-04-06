// 12/26/2019
//https://dmoj.ca/problem/coci08c1p1
package COCI_08;

import java.util.*;
import java.io.*;

public class C1P1Skocimis {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[] = new int[3];
        for (int i=0;i<3;i++) arr[i] = in.nextInt();
        int count=0, d1 = arr[1]-arr[0], d2 = arr[2]-arr[1];
        while (d1!=1||d2!=1) {
            if (d1>d2) arr[2]=arr[1]-1;
            else arr[0]=arr[1]+1;
            Arrays.sort(arr);
            d1 = arr[1]-arr[0];
            d2 = arr[2]-arr[1];
            count++;
        }
        System.out.println(count);  
    }
}
