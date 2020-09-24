// 05/22/2020
// https://dmoj.ca/problem/nccc3s4
package MOCK_18;

import java.util.*;
import java.io.*;

public class nccc3s4 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), a[] = new int[n];
        long sum = 0, max = -1;
        for (int i=0;i<n;i++) {
            a[i] = readInt();
            sum+=a[i];
            max = Math.max(max, a[i]);
        }
        if (n==1) {System.out.println("NO"); return;}
        if (sum%2!=0) {System.out.println("NO"); return;}
        System.out.println(max>sum-max?"NO":"YES");
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