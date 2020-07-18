// 06/06/2020
// https://dmoj.ca/problem/coci06c3p1
package COCI_06;

import java.util.*;
import java.io.*;

public class C3P1Patuljci {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int a[] = new int[9];
    public static void main (String[] args) throws IOException {
        for (int i=0;i<9;i++) a[i] = readInt();
        fun(a[0], 1, 1, a[0]+"\n");
        fun(0, 1, 0, "");
    }
    static void fun(int sum, int id, int amt, String ans) {
        if (amt>7) return;
        if (amt==7) {
            if (sum==100) {System.out.println(ans); System.exit(0);}
            return;
        }
        if (id>=9) return;
        fun(sum+a[id], id+1, amt+1, ans+a[id]+"\n");
        fun(sum, id+1, amt, ans);
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