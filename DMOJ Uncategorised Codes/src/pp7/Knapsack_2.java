// 03/15/2020
//https://dmoj.ca/problem/dpe
package pp7;

import java.util.*;
import java.io.*;

public class Knapsack_2 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int MV = (int)1e6, ans = -1;
        int N = readInt(), W = readInt(), dp[] = new int[MV+1];
        Arrays.fill(dp, (int)(1e9+1e8));
        dp[0] = 0;
        for (int T=0;T<N;T++) {
            int w = readInt(), v = readInt();
            for (int i=MV;i>=v;i--) {
                dp[i] = Math.min(dp[i], dp[i-v]+w);
            }
            for (int i=MV;i>=1;i--) {
                dp[i-1] = Math.min(dp[i], dp[i-1]);
            }
            for (int i=1;i<=MV;i++) {
                if (dp[i]<=W) ans = Math.max(ans, i);
            }
        }
        System.out.println(ans);
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
