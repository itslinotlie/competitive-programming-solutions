// 04/12/2020
// https://dmoj.ca/problem/dmpg18b1
package DMPG_18;

import java.util.*;
import java.io.*;

public class B1PizzaOrders {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        double p = readInt(), c = readInt(), v = readInt();
        int ans = 0;
        ans += (int)Math.ceil(p/3)+(int)Math.ceil(c/3)+(int)Math.ceil(v/3);
        System.out.println(ans);
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
