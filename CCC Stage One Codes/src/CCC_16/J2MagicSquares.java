// 03/31/2020
//https://dmoj.ca/problem/ccc16j2
package CCC_16;

import java.util.*;
import java.io.*;

public class J2MagicSquares {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int ans[][] = new int[4][4];
        for (int i=0;i<4;i++) {
            for (int j=0;j<4;j++) ans[i][j] = readInt();
        }
        int sum = 0, cur = 0;
        boolean FLAG = true;
        for (int i=0;i<4 && FLAG;i++) {
            for (int j=0;j<4;j++) cur+=ans[i][j];
            if (i==0) sum=cur;
            else if (sum!=cur) FLAG = false;
            cur=0;
        }
        for (int i=0;i<4;i++) {
            for (int j=0;j<4;j++) cur+=ans[j][i];
            if (sum!=cur) FLAG = false;
            cur = 0;
        }
        System.out.println(FLAG? "magic":"not magic");   
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
