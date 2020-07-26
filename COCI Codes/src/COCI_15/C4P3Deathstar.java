// 06/06/2020
// https://dmoj.ca/problem/coci15c4p3
package COCI_15;

import java.util.*;
import java.io.*;

public class C4P3Deathstar {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), a[][] = new int[n][n], ans[] = new int[n];
        for (int i=0;i<n;i++)
            for (int j=0;j<n;j++)
                a[i][j] = readInt();
        for (int i=0;i<n;i++) {
            ans[i] = a[i][0];
            for (int j=1;j<n;j++)
                ans[i]|=a[i][j];
        }
        for (int x : ans)
            System.out.print(x+" ");
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
