// 05/21/2020
// https://dmoj.ca/problem/mwc15c1p2
package MWC_15;

import java.util.*;
import java.io.*;

public class C1P2Postcard {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int r = readInt(), c = readInt();
        String g[][] = new String[r+1][c+1];
        int y1 = r, y2 = 0, x1 = c, x2 = 0;
        for (int i=1;i<=r;i++) {
            String tmp[] = readLine().split(" ");
            for (int j=1;j<=c;j++) g[i][j] = tmp[j-1];
            for (int j=1;j<=c;j++) {
                if (g[i][j].equals("*")) {
                    x1 = Math.min(x1, j);
                    y1 = Math.min(y1, i);
                    x2 = Math.max(x2, j);
                    y2 = Math.max(y2, i);
                }
            }
        }
        for (int i=y1;i<=y2;i++) {
            for (int j=x1;j<=x2;j++) System.out.print(g[i][j]+" ");
            System.out.println();
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
