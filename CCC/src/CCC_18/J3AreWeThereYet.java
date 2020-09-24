// 04/17/2020
//https://dmoj.ca/problem/ccc18j3
package CCC_18;

import java.util.*;
import java.io.*;

public class J3AreWeThereYet {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int tmp[] = new int[4], g[][] = new int[5][5];
        for (int i=0;i<4;i++) tmp[i] = readInt();
        for (int i=1;i<=4;i++) g[0][i] = g[0][i-1] + tmp[i-1];
        for (int i=1;i<=4;i++) g[i][0] = g[i-1][0] + tmp[i-1];
    	for(int i=1;i<5;i++) {
            for(int j=1;j<5;j++) {
                g[i][j] = Math.abs(g[i][0] - g[0][j]);
            }
    	}
    	for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) System.out.print(g[i][j] + " ");
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
