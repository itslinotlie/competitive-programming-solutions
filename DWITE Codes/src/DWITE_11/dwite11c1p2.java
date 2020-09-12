// 05/21/2020
// https://dmoj.ca/problem/dwite11c1p2
package DWITE_11;

import java.util.*;
import java.io.*;

public class dwitec1p2 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int T=0;T<5;T++) {
            int n = readInt(), a[] = new int[n], sum = 0, ans = 0;
            for (int i=0;i<n;i++) {
                a[i] = readInt();
                sum+=a[i];
            }
            sum/=n;
            for (int i=0;i<n;i++) {
                ans+=Math.abs(a[i]-sum);
            }
            System.out.println(ans/2);    
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