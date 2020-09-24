// 03/31/2020
//https://dmoj.ca/problem/ccc16s2
package CCC_16;

import java.util.*;
import java.io.*;

public class J5TandemBicycle {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int q = readInt(), n = readInt(), a[] = new int[n], b[] = new int[n];
        for (int i=0;i<n;i++) a[i] = readInt();
        for (int i=0;i<n;i++) b[i] = readInt();
        Arrays.sort(a); Arrays.sort(b);
        int x = 0, y = 0;
        switch (q) {
            case 1:
                for (int i=0;i<n;i++) x+= Math.max(a[i], b[i]);
                for (int i=0;i<n;i++) y+= Math.max(b[i], a[i]);
                System.out.println(Math.min(x, y));
                break;
            case 2:
                for (int i=0;i<n;i++) x+= Math.max(a[i], b[n-i-1]);
                for (int i=0;i<n;i++) y+= Math.max(b[i], a[n-i-1]);
                System.out.println(Math.max(x, y));
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
