// 12/26/2019
// https://dmoj.ca/problem/coci08c2p1
package COCI_08;

import java.util.*;
import java.io.*;

public class C2P1Kornislav {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[] = new int[4];
        for (int i=0;i<4;i++) arr[i] = in.nextInt();
        Arrays.sort(arr);
        System.out.println(arr[2]*arr[0]);
    }
}
