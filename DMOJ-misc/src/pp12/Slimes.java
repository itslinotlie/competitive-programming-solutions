// 05/22/2020
// https://dmoj.ca/problem/dpn
package pp12;

import java.util.*;
import java.io.*;

public class Slimes {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        long psa[] = new long[n+1], dp[][] = new long[n+1][n+1];
        for (int i=1;i<=n;i++) 
            psa[i] = readLong() + psa[i-1];
        
        for (int len=1;len<n;len++) {
            for (int lft=1;lft+len<=n;lft++) {
                int rit = lft+len; dp[lft][rit] = (long)1e15;
                for (int k=lft;k<rit;k++) {
                    dp[lft][rit] = Math.min(dp[lft][rit], dp[lft][k]+dp[k+1][rit] + (psa[rit]-psa[lft-1]));
                }
            }
        }
        System.out.println(dp[1][n]);
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
