// 05/30/2020
// https://dmoj.ca/problem/tree1
package pp7;

import java.util.*;
import java.io.*;

public class IsItATree {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int adj[][] = new int[4][4], sum = 0;
        for (int i=0;i<4;i++) {
            int row = 0;
            for (int j=0;j<4;j++) {
                adj[i][j] = readInt();
                row+=adj[i][j]; sum+=adj[i][j];
            }
            if (row==0) {System.out.println("No"); return;}
        }
        System.out.println(sum==6? "Yes":"No");
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
