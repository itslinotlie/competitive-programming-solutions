// 05/24/2020
// https://dmoj.ca/problem/ioi00p1

import java.util.*;
import java.io.*;

public class ioi00p1 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), dp[][] = new int[2][n+1];
        String x = readLine(); char a[] = new char[n+1];
        for (int i=1;i<=n;i++) a[i] = x.charAt(i-1);
        for (int lft=n-1;lft>=1;lft--) {
            for (int rit=lft+1;rit<=n;rit++) {
                if (a[lft]==a[rit]) dp[0][rit] = dp[1][rit-1];
                else dp[0][rit] = 1 + Math.min(dp[0][rit-1], dp[1][rit]);
            }
            for (int i=1;i<=n;i++) dp[1][i] = dp[0][i];
        }
        System.out.println(dp[1][n]);
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