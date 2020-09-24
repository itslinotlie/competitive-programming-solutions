// 05/30/2020
// https://dmoj.ca/problem/ccoprep16c2q2
package pp12;

import java.util.*;
import java.io.*;

public class AnEasyProblem {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, dp[] = new int[32], max, ans;
    public static void main (String[] args) throws IOException {
        n = readInt();
        for (int i=0, x;i<n;i++) {
            x = readInt(); max = 0;
            for (int j=0;j<=30;j++) 
                if((x>>j & 1)!=0) max = Math.max(max, dp[j]+1);
            for (int j=0;j<=30;j++)
                if((x>>j & 1)!=0) dp[j] = max;
        }
        for (int i=0;i<=30;i++) ans = Math.max(ans, dp[i]);
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
