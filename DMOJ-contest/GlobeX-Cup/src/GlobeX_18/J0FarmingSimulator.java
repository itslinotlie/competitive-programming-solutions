// 11/28/2019
// https://dmoj.ca/problem/globexcup18j0
package GlobeX_18;

import java.util.*;
import java.io.*;

public class J0FarmingSimulator {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int[n], m = in.nextInt();
        long counter = 0;
        for (int i=0;i<n;i++) arr[i] = in.nextInt();
        Arrays.sort(arr);
        for (int i=m;i<n;i++) counter+=arr[i];
        System.out.println(counter);
    }
}
