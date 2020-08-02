// 04/18/2020
// https://dmoj.ca/problem/tsoc16c1p6
package pp12;

import java.util.*;
import java.io.*;

public class JoeyAndBiology {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int a = readInt(), b = readInt(), dp[][] = new int[1005][1005];
        String A = readLine(), B = readLine();
        char ar[] = new char[a+1], br[] = new char[b+1];
        for (int i=1;i<=a;i++) ar[i] = A.charAt(i-1);
        for (int i=1;i<=b;i++) br[i] = B.charAt(i-1);
        
        for (int i=0;i<=a;i++) Arrays.fill(dp[i], 0x3f3f3f3f);
        dp[0][0] = 0;
        for(int i=1;i<=Math.max(a,b);i++){
            dp[0][i] = dp[i][0] = (i+2)/3;
        }
        for (int i=1;i<=a;i++) {
            for (int j=1;j<=b;j++) {
                if (ar[i]==br[j]) dp[i][j] = dp[i-1][j-1];
                else dp[i][j]= dp[i-1][j-1]+1;
                for (int k=Math.max(0, i-3);k<i;k++) dp[i][j] = Math.min(dp[i][j], dp[k][j]+1);
                for (int k=Math.max(0, j-3);k<j;k++) dp[i][j] = Math.min(dp[i][j], dp[i][k]+1);
            } 
        }
        System.out.println(dp[a][b]);
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