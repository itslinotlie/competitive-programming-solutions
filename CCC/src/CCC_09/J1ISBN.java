// 03/31/2020
//https://dmoj.ca/problem/ccc09j1
package CCC_09;

import java.util.*;
import java.io.*;

public class J1ISBN {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int base = (9+8+9+1+1) + 3*(7+0+2+4+8), a = readInt(), b = readInt(), c = readInt();
        base+=a+3*b+c;
        System.out.println("The 1-3-sum is "+base);
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
