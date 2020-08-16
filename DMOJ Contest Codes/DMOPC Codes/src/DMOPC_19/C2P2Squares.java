// 06/06/2020
// https://dmoj.ca/problem/dmopc19c2p2
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C2P2Squares {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int r = readInt(), c = readInt(), g[][] = new int[r+1][c+1], dp[][] = new int[r+1][c+1];
        for (int i=1;i<=r;i++) {
            for (int j=1;j<=c;j++) g[i][j] = readInt();
        }
        for (int i=1;i<=r;i++) {
            for (int j=1;j<=c;j++) {
                if (i==1) dp[i][j] = dp[i][j-1] + g[i][j];
                else if (j==1) dp[i][j] = dp[i-1][j] + g[i][j];
                else dp[i][j] = g[i][j] + Math.min(dp[i-1][j], dp[i][j-1]);
            }
        }
        System.out.println(dp[r][c]);
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
