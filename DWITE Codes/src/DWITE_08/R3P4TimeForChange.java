// 03/22/2020
//https://dmoj.ca/problem/dwite08c3p4
package DWITE_08;

import java.util.*;
import java.io.*;

public class R3P4TimeForChange {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int T=0;T<5;T++) {
            int m = readInt(), n = readInt(), dp[] = new int[m+1], max = (int)1e6;
            Arrays.fill(dp, max); dp[0] = 0;
            for (int i=0;i<n;i++) {
                int tmp = readInt();
                for (int j=tmp;j<=m;j++) dp[j] = Math.min(dp[j], dp[j-tmp]+1);
            }
            System.out.println(dp[m]);
        }
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
