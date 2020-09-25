// 03/23/2020
// https://dmoj.ca/problem/nccc6j5
package MOCK_19;

import java.util.*;
import java.io.*;

public class nccc6j5 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), k = readInt(), MV = (int)1e3, cnt[] = new int[MV+1];
        for (int i=0;i<n;i++) cnt[readInt()]++;
        long dp[][] = new long[MV+1][k+1], mod = 998244353;
        dp[1][0] = 1; dp[1][1] = cnt[1];
        for (int i=2;i<=MV;i++) {
            for (int j=0;j<=k;j++) {
                if (j==0) dp[i][j] = 1;
                else {
                    dp[i][j] = (dp[i-1][j-1]*cnt[i]%mod + dp[i-1][j]%mod)%mod;
                }
            }
        }
        System.out.println(dp[MV][k]);
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