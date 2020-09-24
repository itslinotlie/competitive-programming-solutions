// 04/27/2020
// https://dmoj.ca/problem/wac4p2
package WAC_4;

import java.util.*;
import java.io.*;

public class P2SquirrelElection {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), MV = (int)5e3+5, min = 0;
        long dp[] = new long[MV+1];
        Arrays.fill(dp, (long)1e13); dp[0] = 0;
        for (int i=0;i<n;i++) {
            int v = readInt(), p = readInt(); min+=p;
            v = v/2+1;
            for (int j=MV;j>=p;j--) dp[j] = Math.min(dp[j], dp[j-p]+v);
            for (int j=MV;j>=1;j--) dp[j-1] = Math.min(dp[j], dp[j-1]);
        }
        long tmp = -1;
        for (int i=1;i<=MV;i++) {
            if (dp[i]!=0x3f3f3f3f) tmp = Math.max(tmp, dp[i]);
            dp[i] = tmp;
        }
        min = min/2+1;
        System.out.println(dp[min]);
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