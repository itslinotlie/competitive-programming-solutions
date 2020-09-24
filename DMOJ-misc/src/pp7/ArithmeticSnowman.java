// 01/21/2020
//https://dmoj.ca/problem/year2016p3
package pp7;

import java.util.*;
import java.io.*;

public class ArithmeticSnowman {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int[n], frq[] = new int[100001];
        for (int i=0;i<n;i++) {
            arr[i] = in.nextInt();
            frq[arr[i]]++;
        }
        Arrays.sort(arr);
        int ans = 0;
        for (int i=0;i<n;i++) {
            for (int j=i+1;j<n;j++) {
                int k = 2*arr[j]-arr[i];
                if(k >= frq.length) continue;
                if ((arr[i]!=arr[j] && frq[k]>0)||(arr[i]==arr[j] && frq[k]>=3)) {
                    ans = Math.max(ans, 3*arr[j]);
                }
            }
        }
        System.out.println(ans);
    }
}
