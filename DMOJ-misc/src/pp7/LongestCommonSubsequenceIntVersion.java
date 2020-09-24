// 03/21/2020
//https://dmoj.ca/problem/lcs
package pp7;

import java.util.*;
import java.io.*;

public class LongestCommonSubsequenceIntVersion {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int na[], ma[], dp[][];
    static int N, M;
    public static void main (String[] args) throws IOException {
        N = readInt(); M = readInt(); na = new int[N+1]; ma = new int[M+1]; dp = new int[N+1][M+1];
        for (int i=1;i<=N;i++) na[i] = readInt();
        for (int i=1;i<=M;i++) ma[i] = readInt();
        
        for (int i=1;i<=N;i++) {
            for (int j=1;j<=M;j++) {
                if (ma[j]==na[i]) dp[i][j] = dp[i-1][j-1] + 1;
                else dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
            }
        }
        System.out.println(dp[N][M]);
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