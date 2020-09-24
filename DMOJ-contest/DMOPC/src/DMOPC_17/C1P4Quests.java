// 04/16/2020
// https://dmoj.ca/problem/dmopc17c1p4
package DMOPC_17;

import java.util.*;
import java.io.*;

public class C1P4Quests {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int N = readInt(), H = readInt();
        long dp[][] = new long[2][H+1];
        for (int i=1;i<=N;i++) {
            long g = readInt(); int h = readInt();
            long q = readInt(); int t = readInt();
            Arrays.fill(dp[1], -(long)1e10);
            for (int j=h;j<=Math.max(h, t);j++) dp[1][j] = Math.max(dp[0][j], dp[0][j-h]+g);
            for (int j=Math.max(h, t);j<=H;j++) dp[1][j] = Math.max(dp[0][j-h]+g, dp[1][j-t]+q);
            for (int j=1;j<=H;j++) dp[0][j] = Math.max(dp[0][j], dp[1][j]);
        }
        System.out.println(dp[0][H]);
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