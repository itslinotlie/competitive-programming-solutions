// 03/31/2020
//https://dmoj.ca/problem/ccc05j2
package CCC_05;

import java.util.*;
import java.io.*;

public class J2RSANumbers {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int a = readInt(), b = readInt(), cnt = 0;
        for (int i=a;i<=b;i++) {
            if (check(i)) cnt++;
        }
        System.out.println("The number of RSA numbers between "+a+" and "+b+" is "+cnt);
    }
    static boolean check(int x) {
        return factor(x)==4;
    }
    static int factor(int x) {
        int cnt = 0;
        for (int i=1;i<=x;i++) {
            if (x%i==0) cnt++;
        }
        return cnt;
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
