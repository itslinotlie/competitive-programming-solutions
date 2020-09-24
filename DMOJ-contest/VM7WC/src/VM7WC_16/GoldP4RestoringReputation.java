// 03/26/2020
// https://dmoj.ca/problem/vmss7wc16c4p3
package VM7WC_16;

import java.util.*;
import java.io.*;

public class GoldP4RestoringReputation {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int D, I, R, dp[][];
    public static void main (String[] args) throws IOException {
        D = readInt(); I = readInt(); R = readInt();
        String a = next(), b = next(); int al = a.length(), bl = b.length();
        dp = new int[al+1][bl+1];
        
        //LCS implementation
        for (int i=0;i<=al;i++) {
            for (int j=0;j<=bl;j++) {
                if (i==0) dp[i][j] = j*I;
                else if (j==0) dp[i][j] = i*D;
                else if (a.charAt(i-1)==b.charAt(j-1)) dp[i][j] = dp[i-1][j-1];
                else {
                    int x = dp[i][j-1] + I;
                    int y = dp[i-1][j] + D;
                    int z = dp[i-1][j-1] + R;
                    dp[i][j] = Math.min(x, Math.min(y, z));
                }
            }
        }
        System.out.println(dp[al][bl]);
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
