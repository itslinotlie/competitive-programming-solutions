// 05/22/2020
// https://dmoj.ca/problem/ecoo16r3p3
package ECOO_16;

import java.util.*;
import java.io.*;

public class R3P3CamelCase {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(); 
        Set<String> set = new TreeSet();
        for (int i=0;i<n;++i) set.add(readLine());
        for (int T=0;T<10;++T) {
            String x = readLine();
            int xl = x.length(), dp[] = new int[xl+1];
            Arrays.fill(dp, 0x3f3f3f3f); dp[xl] = -1;
            for (int i=xl-1;i>=0;i--) {
                for (int j=i+1;j<=xl;j++) {
                    if (set.contains(x.substring(i, j))) {
                        dp[i] = Math.min(dp[i], dp[j]+1);
                    }
                }
            }
            System.out.println(dp[0]);
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