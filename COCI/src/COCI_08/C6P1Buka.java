// 04/06/2020
//https://dmoj.ca/problem/coci08c6p1
package COCI_08;

import java.util.*;
import java.io.*;
import java.math.BigInteger;

public class C6P1Buka {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        BigInteger a = new BigInteger(readLine());
        String tmp = readLine();
        BigInteger b = new BigInteger(readLine());
        System.out.println(tmp.equals("*")? a.multiply(b):a.add(b));
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
