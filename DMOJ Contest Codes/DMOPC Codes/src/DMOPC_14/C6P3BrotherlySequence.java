// 06/01/2020
// https://dmoj.ca/problem/dmopc14c5p3
package DMOPC_14;

import java.util.*;
import java.io.*;

public class C6P3BrotherlySequence {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), a[] = new int[n+1], max = -1;
        Arrays.fill(a, 1);
        int prev = readInt();
        for (int i=2;i<=n;i++) {
            int cur = readInt();
            if (Math.abs(cur-prev)<=2) a[i] = a[i-1] + 1;
            else a[i] = 1;
            max = Math.max(max, a[i]);
            prev = cur;
        }
        System.out.println(max);
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
