// 02/25/2020
//https://dmoj.ca/problem/interview2
package pp7;

import java.util.*;
import java.io.*;

public class CountTheTriplets {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int[n];
        boolean vis[] = new boolean[(int)1e7+2];
        for (int i=0;i<n;i++) {int tmp = in.nextInt(); arr[i] = tmp; vis[tmp] = true;}
        Arrays.sort(arr);

        Set<String> set = new HashSet();
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (i==j) continue;
                if (arr[i]>arr[j]) continue;
                if (vis[arr[i]+arr[j]]) {set.add(arr[i]+", "+arr[j]+", "+(arr[i]+arr[j]));} //System.out.println(arr[i]+" "+arr[j]+" "+(arr[i]+arr[j]));}
            }
        }
        System.out.println(set.isEmpty()? "-1":set.size());
    }   
}
