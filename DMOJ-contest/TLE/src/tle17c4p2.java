// 03/15/2020
//https://dmoj.ca/problem/tle17c4p2

import java.util.*;
import java.io.*;

public class tle17c4p2 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    
    static int cur, max = (int)1e8, sm[] = new int[6];
    static boolean vis[];
    public static void main (String[] args) throws IOException {
        String t[] = readLine().split("[:]"); 
        cur = Integer.parseInt(t[0])*3600 + Integer.parseInt(t[1])*60 + Integer.parseInt(t[2]);
        char x[] = readLine().toCharArray();
        vis = new boolean[10];
        for (int i=0;i<x.length;i++) vis[Integer.parseInt(Character.toString(x[i]))] = true;
        for (int a=0;a<=9;a++) {
            for (int b=0;b<=9;b++) {
                for (int c=0;c<=9;c++) {
                    for (int d=0;d<=9;d++) {
                        for (int e=0;e<=9;e++) {
                            for (int f=0;f<=9;f++) {
                                check(a,b,c,d,e,f);
                            }
                        }
                    }
                }
            }
        }
        System.out.print(sm[0]); System.out.print(sm[1]+":");
        System.out.print(sm[2]); System.out.print(sm[3]+":");
        System.out.print(sm[4]); System.out.println(sm[5]);
    }
    static void check(int a, int b, int c, int d, int e, int f) {
        if (vis[a] && vis[b] && vis[c] && vis[d] && vis[e] && vis[f]) {
            if (Math.abs(cur-(a*3600*10 + b*3600 + c*60*10 + d*60 + e*10 + f))<max) {
                max = Math.abs(cur-getTime(a,b,c,d,e,f));
                sm[0] = a; sm[1] = b; sm[2] = c; sm[3] = d; sm[4] = e; sm[5] = f;
            }
        }
    }
    static int getTime(int a, int b, int c, int d, int e, int f) {
        return a*3600*10 + b*3600 + c*60*10 + d*60 + e*10 + f;
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
