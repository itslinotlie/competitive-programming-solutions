// 04/02/2020
//https://dmoj.ca/problem/gfssoc2j4
package pp7;

import java.util.*;
import java.io.*;

public class Marathon {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), q = readInt(), a[] = new int[n+1];
        for (int i=1;i<=n;i++) a[i] = a[i-1] + readInt();
        for (int i=0;i<q;i++) {
            int x = readInt(), y = readInt();
            System.out.println(a[n]-(a[y]-a[x-1]));
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
