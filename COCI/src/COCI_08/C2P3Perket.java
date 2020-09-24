// 03/15/2020
//https://dmoj.ca/problem/coci08c2p3
package COCI_08;

import java.util.*;
import java.io.*;

public class C2P3Perket {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    
    static int n, arr[][], min = Integer.MAX_VALUE;
    public static void main (String[] args) throws IOException {
        n = readInt(); arr = new int[n][2];
        for (int i=0;i<n;i++) {arr[i][0] = readInt(); arr[i][1] = readInt();}
        fun (0, 1, 0);
        System.out.println(min);
        
    }
    static void fun(int size, int sour, int bitter) {
        if (size==n) {
            if (bitter!=0) min = Math.min(min, Math.abs(sour-bitter));
        }
        else {
            fun(size+1, sour*arr[size][0], bitter+arr[size][1]);
            fun(size+1, sour, bitter);
        }
    }
    
    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static String readLine() throws IOException {
        return br.readLine().trim();
    }      
    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }    
    static long readLong() throws IOException {
        return Long.parseLong(next());
    }
    static double readDouble() throws IOException {
        return Double.parseDouble(next());
    }
}
