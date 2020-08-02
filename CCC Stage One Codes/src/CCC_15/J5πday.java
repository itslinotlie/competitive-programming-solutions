// 03/15/2020
// https://dmoj.ca/problem/ccc15j5
package CCC_15;

import java.util.*;
import java.io.*;

public class J5πday {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, k, dp[][];
    public static void main (String[] args) throws IOException {
        n = readInt(); k = readInt(); dp = new int[n+1][k+1];
        System.out.println(pi(n-k,k));  
    }
    static int pi(int n, int k) {
        if (n<0 || (k==0 &&n>0)) return 0;
        if (n==0 && k>0) return 1;
        if (dp[n][k]!=0) return dp[n][k];
        return dp[n][k] = pi(n-k, k) + pi(n, k-1);
    }
    
    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static String readLine() throws IOException {
        return br.readLine().trim();
    }      
    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }    
    static long readLong() throws IOException {
        return Long.parseLong(next());
    }
    static double readDouble() throws IOException {
        return Double.parseDouble(next());
    }
}