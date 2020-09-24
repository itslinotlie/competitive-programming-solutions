// 04/04/2020
// https://dmoj.ca/problem/dwite07c3p3
package DWITE_07;

import java.util.*;
import java.io.*;

public class R3P3Playlist {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int t=0;t<5;t++) {
            int MV = readInt(), n = readInt(), dp[] = new int[MV+1];
            for (int i=0;i<n;i++) {
                next(); int v = readInt(), s = readInt();
                for (int j=MV;j>=s;j--) {
                    dp[j] = Math.max(dp[j], dp[j-s]+v);
                }
            }
            System.out.println(dp[MV]);
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
