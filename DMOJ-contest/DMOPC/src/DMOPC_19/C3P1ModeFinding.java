// 06/08/2020
// https://dmoj.ca/problem/dmopc19c3p1
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C3P1ModeFinding {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), MV = (int)1e5, frq[] = new int[2*MV+1], max = -1;
        for (int i=0;i<n;i++) {
            int x = readInt()+MV;
            frq[x]++;
            max = Math.max(max, frq[x]);
        }
        for (int i=0;i<=2*MV;i++) {
            if (frq[i]==max) System.out.print((i-MV)+" ");
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
