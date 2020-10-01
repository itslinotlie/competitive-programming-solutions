// 04/11/2020
// http://www.usaco.org/index.php?page=viewproblem2&cpid=1039
package Mar_2020;

import java.util.*;
import java.io.*;

public class SilverP2Cereal {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, m, f[], s[], c[], ans[], cnt = 0;
    public static void main (String[] args) throws IOException {
        n = readInt(); m = readInt();
        f = new int[n+1]; s = new int[n+1];
        c = new int[m+1]; ans = new int[n+1];
        for (int i=1;i<=n;i++) {
            f[i] = readInt(); s[i] = readInt();
        }
        for (int i=n;i>=1;i--) {
            fun(i, f[i]); ans[i] = cnt;
        }
        for (int i=1;i<=n;i++) System.out.println(ans[i]);
    }
    static void fun(int cow, int flavor) {
        if(c[flavor]==0) {
            cnt++; c[flavor] = cow;
        }
        else if (c[flavor] > cow) {
            int tmp = c[flavor]; c[flavor] = cow;
            if (flavor != s[tmp]) fun(tmp, s[tmp]);
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
