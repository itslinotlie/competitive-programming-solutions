// 06/01/2020
// https://dmoj.ca/problem/dmopc19c7p1
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C7P1Hydrocarbons {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int a = readInt(), b = readInt(), c = readInt(), d = readInt();
        int carb = a+b+c+1, hydr = d;
        if((b==0 && a<c-1) || (b!=0 && a<c)) {System.out.println("invalid"); return;}
        int bond = 2*a + 4*b + 6*c, bWant = 4*carb - bond;
        if (bWant!=d) System.out.println("invalid");
        else System.out.println("C"+carb+"H"+hydr);
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
