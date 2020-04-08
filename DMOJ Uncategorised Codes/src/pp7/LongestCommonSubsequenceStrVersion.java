// 03/25/2020
//https://dmoj.ca/problem/dpf
package pp7;

import java.util.*;
import java.io.*;

public class LongestCommonSubsequenceStrVersion {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        String x = readLine(), y = readLine();
        int xl = x.length(), yl = y.length(), dp[][] = new int[xl+1][yl+1];
        char a[] = new char[xl+1], b[] = new char[yl+1];
        a[0] = ' '; for (int i=1;i<=xl;i++) a[i] = x.charAt(i-1);
        b[0] = ' '; for (int i=1;i<=yl;i++) b[i] = y.charAt(i-1);
        for (int i=1;i<=xl;i++) {
            for (int j=1;j<=yl;j++) {
                if (a[i]==b[j]) dp[i][j] = dp[i-1][j-1] + 1;
                else dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
            }
        }
        int c = xl, d = yl; Stack<String> ans = new Stack();
        while (c!=0 && d!=0) {
            int tmp = dp[c][d];
            if (tmp!=dp[c-1][d] && tmp!=dp[c][d-1]) {ans.add(Character.toString(a[c])); c--;d--;}
            else if (dp[c-1][d]>dp[c][d-1]) {c--;}
            else d--;
        }
        while (!ans.isEmpty()) System.out.print(ans.pop());
        System.out.println();
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
