// 04/19/2020
//https://dmoj.ca/problem/ccc07j3
package CCC_07;

import java.util.*;
import java.io.*;

public class J3DealRrNoDealCalculator {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        boolean vis[] = new boolean[10+1];
        Arrays.fill(vis, true);
        int n = readInt(), sum=0, idx=0;
        for (int i=0;i<n;i++) vis[readInt()] = false;
        for (int i=1;i<=10;i++) {
            if (vis[i]) {
                sum+=getValue(i);
                idx++;
            }
        }
        int offer = readInt();
        System.out.println(offer > sum/idx? "deal":"no deal");
    }
    static int getValue(int i) {
        switch (i) {
            case 1: return 100;
            case 2: return 500;
            case 3: return 1000;
            case 4: return 5000;
            case 5: return 10000;
            case 6: return 25000;
            case 7: return 50000;
            case 8: return 100000;
            case 9: return 500000;
            case 10: return 1000000;
        }
        return 0;
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
