// 04/21/2020
//https://dmoj.ca/problem/dmpg17b1
package DMPG_17;

import java.util.*;
import java.io.*;

public class B1WhaleAndSoul {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), day = 0, cost = 0x3f3f3f3f;
        for (int i=0;i<n;i++) {
            int a = readInt(), b = readInt();
            if (b>day) {day=b; cost = a;}
            else if (b==day) cost = Math.min(cost, a);
        }
        System.out.println(cost+" "+day);   
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
