// 03/17/2020
// https://dmoj.ca/problem/dwite10c2p3
package DWITE_10;

import java.util.*;
import java.io.*;

public class dwite10c2p3 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static char arr[][] = new char[8][8];
    static int max = -1;
    public static void main (String[] args) throws IOException {
        for (int T=0;T<5;T++) {
            for (int i=0;i<8;i++) {
                String tmp = readLine();
                for (int j=0;j<8;j++) arr[i][j] = tmp.charAt(j);
            }
            fun(0, 7, 0); 
            System.out.println(max); max = -1;
            readLine();
        }
    }
    static void fun(int x, int y, int sum) {
        max = Math.max(max, sum);
        char tmp = arr[y][x];
        if (tmp == '#') {}
        else {
            if (48<=tmp && tmp<=57) sum+=Integer.parseInt(Character.toString(tmp));
            if (y-1>=0) fun(x, y-1, sum);
            if (x+1<8) fun(x+1, y, sum);
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