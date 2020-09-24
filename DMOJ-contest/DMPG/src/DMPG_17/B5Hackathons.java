// 03/22/2020
//https://dmoj.ca/problem/dmpg17b5
package DMPG_17;

import java.util.*;
import java.io.*;

public class B5Hackathons {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), MV = (int)1e6, dp[] = new int[MV+1];
        for (int i=0;i<n;i++) {
            int t = readInt(), w = readInt();
            dp[t] = Math.max(dp[t],w);
        }
        for (int i=1;i<=MV;i++) dp[i] = Math.max(dp[i-1], dp[i]);
        int q = readInt();
        for (int i=0;i<q;i++) System.out.println(dp[readInt()]);
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
