// 05/24/2020
// https://dmoj.ca/problem/ccc16s4
package CCC_16;

import java.util.*;
import java.io.*;

public class S4CombiningRiceballs {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), psa[] = new int[n+1], ans = -1;
        boolean dp[][] = new boolean[n+1][n+1];
        for (int i=1;i<=n;i++) {
            psa[i] = readInt() + psa[i-1];
            dp[i][i] = true;
            ans = Math.max(ans, psa[i]-psa[i-1]);
        }
        for (int len=1;len<n;len++) {
            for (int lft=1;lft+len<=n;lft++) {
                int rit = len+lft;
                for (int L=lft,R=rit;L<=R;) {
                    int Lsum = psa[L]-psa[lft-1], Rsum = psa[rit]-psa[R-1];
                    if (Lsum==Rsum && dp[lft][L] && dp[R][rit] && (L+1==R||dp[L+1][R-1])) {
                        dp[lft][rit] = true; 
                        ans = Math.max(ans, psa[rit]-psa[lft-1]);
                    }
                    if (Lsum<Rsum) L++;
                    else R--;
                }
            }
        }
        System.out.println(ans);
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
