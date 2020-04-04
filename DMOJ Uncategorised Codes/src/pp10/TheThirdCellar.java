// 04/01/2020
//https://dmoj.ca/problem/phantom2
package pp10;

import java.util.*;
import java.io.*;

public class TheThirdCellar {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int MV = (int)1e6;
        boolean p[] = new boolean[MV+1]; Arrays.fill(p, true); p[0] = false; p[1] = false;
        for (int i=2;i<=MV;i++) {
            if (!p[i]) continue;
            for (int j=i+i;j<=MV;j+=i) p[j] = false;
        }
        int bk[] = new int[MV+1]; bk[1] = 0;
        for (int i=2;i<=MV;i++) {
            if (p[i]) bk[i] = bk[i-1] + 1;
            else bk[i] = bk[i-1];
        }
        int T = readInt();
        for (int t=0;t<T;t++) {
            int L = readInt(), R = readInt();
            System.out.println(bk[R-1]-bk[L-1]);
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
