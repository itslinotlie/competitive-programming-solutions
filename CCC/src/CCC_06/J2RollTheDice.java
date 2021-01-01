// 03/31/2020
//https://dmoj.ca/problem/ccc06j2
package CCC_06;

import java.util.*;
import java.io.*;

public class J2RollTheDice {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int a = readInt(), b = readInt(), cnt = 0;
        for (int i=1;i<=a;i++) {
            for (int j=1;j<=b;j++) if (i+j==10) cnt++;
        }
        pr.println(cnt==1?"There is "+cnt+" way to get the sum 10.":"There are "+cnt+" ways to get the sum 10.");
        pr.close();
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
