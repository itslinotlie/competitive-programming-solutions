// 11/21/2019
// https://dmoj.ca/problem/ccc96s5
package CCC_96;

import java.util.*;
import java.io.*;

public class S5MaximumDistance {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i=0;i<n;i++) {
            int temp = in.nextInt(),arr1[] = new int[temp],arr2[] = new int[temp], max = 0;
            for (int j=0;j<temp;j++)arr1[j] = in.nextInt();
            for (int j=0;j<temp;j++)arr2[j] = in.nextInt();
            
            for (int j=0;j<temp;j++) {
                for (int k=j+1;k<temp;k++) {
                    if (arr1[j]==arr2[k]) 
                        if (max < k-j) max = k-j;
                }
            }
            System.out.println("The maximum distance is "+max);
        }
    }
}
