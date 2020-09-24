// 04/05/2020
// https://dmoj.ca/problem/coci07c4p2
package COCI_07;

import java.util.*;
import java.io.*;

public class C4P2Veci {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static char a[];
    static boolean FLAG = true;
    public static void main (String[] args) throws IOException {
        a = readLine().toCharArray();
        while (next_permutation()) {
            for (int i=0;i<a.length;i++) System.out.print(a[i]);
            FLAG = false; break;
        }
        if (FLAG) System.out.println("0");
    }
    static boolean next_permutation() {
        if (a.length <= 1) return false;
        int p = a.length - 2;
        while(p>=0 && a[p]>=a[p+1]) p--;
        if (p < 0) return false;
        int q = a.length - 1;
        while(a[q]<=a[p]) q--;
        char tmp = a[p]; a[p] = a[q]; a[q] = tmp;
        for(int l=p+1, r=a.length-1;l<r;l++,r--) {
            tmp = a[l]; a[l] = a[r]; a[r] = tmp;
        }
        return true;
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
