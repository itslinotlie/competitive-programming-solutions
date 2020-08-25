// 11/17/2019
// https://dmoj.ca/problem/vmss7wc15c3p2
package VM7WC_15;

import java.util.*;
import java.io.*;

public class SilverP3TestScores {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int[n];
        int k = in.nextInt(), sum = 0;
        for (int i=0;i<n;i++) arr[i] = in.nextInt();
        Arrays.sort(arr); 
        for (int i=0;i<k;i++) {
            if (arr[n-i-1] > 0) sum+=arr[n-i-1];
        }
        System.out.println(sum);
    }
}
