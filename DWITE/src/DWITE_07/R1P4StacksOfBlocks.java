// 05/21/2020
// https://dmoj.ca/problem/dwite07c1p4
package DWITE_07;

import java.util.*;
import java.io.*;

public class R1P4StacksOfBlocks {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int t, n, a[], ans = 0x3f3f3f3f;
    public static void main (String[] args) throws IOException {
        t = readInt(); n = readInt(); a = new int[n];
        for (int i=0;i<n;i++) a[i] = readInt();
        fun(a[0], 1, 1);
        fun(0, 1, 0);
        System.out.println(ans==0x3f3f3f3f? 0:ans);
    }
    static void fun(int sum, int idx, int amt) {
        if (idx==n) {
            if (sum==t) ans = Math.min(ans, amt);
            return;
        }
        if (sum>t) return;
        fun(sum+a[idx], idx+1, amt+1);
        fun(sum, idx+1, amt);
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
