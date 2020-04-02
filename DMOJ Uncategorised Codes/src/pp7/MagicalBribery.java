// 02/25/2020
//https://dmoj.ca/problem/ppwindsor18p7
package pp7;

import java.util.*;
import java.io.*;

public class MagicalBribery {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long dp[][] = new long[n+1][n+1];
        for (int i=1;i<=n;i++) {
            long tmp = in.nextLong();
            for (int j=1;j<=n;j++) {
                if (j<i) dp[i][j] = dp[i-1][j];
                else dp[i][j] = Math.max(Math.max(dp[i][j-1], dp[i][j-i]+tmp), dp[i-1][j]);
            }
        }
        System.out.println(dp[n][n]);
    }
}
