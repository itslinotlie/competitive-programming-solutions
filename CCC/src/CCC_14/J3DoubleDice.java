// 03/21/2020
//https://dmoj.ca/problem/ccc14j3
package CCC_14;

import java.util.*;
import java.io.*;

public class J3DoubleDice {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), A = 100, D = 100;
        for (int i=0;i<n;i++) {
            int a = readInt(), d = readInt();
            if (a>d) D-=a;
            else if (a<d) A-=d;
        }
        System.out.println(A+"\n"+D);
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
