// 05/15/20
// https://dmoj.ca/problem/dpm
package pp12;

import java.util.*;
import java.io.*;

public class Candies {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), k = readInt(), dp[][] = new int[n+1][k+1], MOD = (int)1e9+7;
        dp[0][0] = 1; 
        for (int i=1;i<=n;i++) {
            int tmp = readInt(); dp[i][0] = 1;
            for (int j=1;j<=k;j++) {
                if (j>=tmp+1) dp[i][j] = (dp[i-1][j] - dp[i-1][j-tmp-1] + MOD)%MOD;
                else dp[i][j] = dp[i-1][j];
                dp[i][j] = (dp[i][j] + dp[i][j-1])%MOD;
            }
        }
        System.out.println(dp[n][k]);
    }

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static String readLine() throws IOException {return br.readLine().trim();}      
    static int readInt() throws IOException {return Integer.parseInt(next());}    
    static long readLong() throws IOException {return Long.parseLong(next());}
    static double readDouble() throws IOException {return Double.parseDouble(next());}
}