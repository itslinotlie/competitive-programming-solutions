// 03/26/2020
// https://dmoj.ca/problem/cco18p1
package CCO_18;

import java.util.*;
import java.io.*;

public class P1GeeseVsHawks {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), a[] = new int[n+1], b[] = new int[n+1];
        char s[] = new char[n+1], t[] = new char[n+1];
        String x = readLine(); for (int i=1;i<=n;i++) s[i] = x.charAt(i-1);
        for (int i=1;i<=n;i++) a[i] = readInt();
        String y = readLine(); for (int i=1;i<=n;i++) t[i] = y.charAt(i-1);
        for (int i=1;i<=n;i++) b[i] = readInt();
        int dp[][] = new int[n+1][n+1];
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                int sum = a[i] + b[j];
                if (s[i]=='W' && t[j]=='L') {
                    if (a[i]>b[j]) dp[i][j] = Math.max(Math.max(dp[i-1][j], dp[i][j-1]),dp[i-1][j-1] + sum);
                    else dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
                }
                else if (s[i]=='L' && t[j]=='W') {
                    if (a[i]<b[j]) dp[i][j] = Math.max(Math.max(dp[i-1][j], dp[i][j-1]),dp[i-1][j-1] + sum);
                    else dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
                }
                else dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
            }
        }
        System.out.println(dp[n][n]);
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
