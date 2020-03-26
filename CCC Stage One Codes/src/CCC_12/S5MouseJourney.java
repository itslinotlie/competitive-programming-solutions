// 03/15/2020
//https://dmoj.ca/problem/ccc12s5
package CCC_12;

import java.util.*;
import java.io.*;

public class S5MouseJourney {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int R = readInt(), C = readInt(), dp[][] = new int[C+1][R+1];
        dp[1][1] = 1;
        int k = readInt();
        for (int i=0;i<k;i++) {
            int x = readInt(), y = readInt();
            dp[y][x] = -1;
        }
            
        for (int i=0;i<=C;i++) {
            for (int j=0;j<=R;j++) {
                int val = dp[i][j]; if (val == -1) continue;
                if (i+1<=C && dp[i+1][j] != -1) dp[i+1][j] += val;
                if (j+1<=R && dp[i][j+1] != -1) dp[i][j+1] += val;
            }
        }
        System.out.println(dp[C][R]);
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
