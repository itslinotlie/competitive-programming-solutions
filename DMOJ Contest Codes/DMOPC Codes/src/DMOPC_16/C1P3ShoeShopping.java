// 06/06/2020
// https://dmoj.ca/problem/dmopc16c1p3
package DMOPC_16;

import java.util.*;
import java.io.*;

public class C1P3ShoeShopping {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(); double a[] = new double[n+1], dp[] = new double[n+1];
        for (int i=1;i<=n;i++) a[i] = readDouble();
        if (n==1) {System.out.println(a[1]); return;}
        if (n==2) {System.out.println(a[1]+a[2]-Math.min(a[1], a[2])/2); return;}
         
        Arrays.fill(dp, (double)1e10); dp[0] = 0; dp[1] = a[1]; dp[2] = a[1] + a[2] - Math.min(a[1], a[2])/2;
        for (int i=3;i<=n;i++) {
            dp[i] = Math.min(dp[i], dp[i-1]+a[i]);
            dp[i] = Math.min(dp[i], dp[i-2]+a[i-1]+a[i]-Math.min(a[i-1], a[i])/2);
            dp[i] = Math.min(dp[i], dp[i-3]+a[i-2]+a[i-1]+a[i]-Math.min(a[i-2], Math.min(a[i-1], a[i])));
        }
        System.out.printf("%.1f\n", dp[n]);
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
