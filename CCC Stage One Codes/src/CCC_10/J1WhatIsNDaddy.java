// 03/21/2020
//https://dmoj.ca/problem/ccc10j1
package CCC_10;

import java.util.*;
import java.io.*;

public class J1WhatIsNDaddy {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), cnt = 0;
        for (int a=0;a<=5;a++) {
            for (int b=0;b<=5;b++) {
                if (a+b==n) {
                    if (a==b) cnt++;
                    cnt++;
                }
            }
        }
        System.out.println(cnt/2);
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
