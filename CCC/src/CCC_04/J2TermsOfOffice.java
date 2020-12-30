// 03/31/2020
//https://dmoj.ca/problem/ccc04j2
package CCC_04;

import java.util.*;
import java.io.*;

public class J2TermsOfOffice {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int a = readInt(), b = readInt();
        for (int i=0;i<=b-a;i++) {
            if (i%2==0 && i%3==0 && i%4==0 && i%5==0) 
                System.out.println("All positions change in year "+(i+a));
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
