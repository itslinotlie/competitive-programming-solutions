// 05/22/2020
// https://dmoj.ca/problem/dpl
package pp10;

import java.util.*;
import java.io.*;

public class Deque {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        long psa[] = new long[n+1], dp[][] = new long[n+1][n+1];
        for (int i=1;i<=n;++i) {
            dp[i][i] = readInt();
            psa[i] = dp[i][i] + psa[i-1];
        }
        for (int len=1;len<n;len++) {
            for (int lft=1;lft+len<=n;lft++) {
                int rit = lft+len; // [1,2] -> [2,3] -> [3,4]
                dp[lft][rit] = (psa[rit]-psa[lft-1]) - Math.min(dp[lft+1][rit], dp[lft][rit-1]);
            }
        }
        System.out.println(2*dp[1][n]-psa[n]);
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
