// 03/21/2020
// https://dmoj.ca/problem/ccc05j1
package CCC_05;

import java.util.*;
import java.io.*;

public class J1TheCellSell {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        double A,B; A=B=0;
        int d = readInt(), e = readInt(), w = readInt();
        
        A+=Math.max(d-100,0)*.25; B+=Math.max(d-250,0)*.45;
        A+=e*.15; B+=e*.35;
        A+=w*.20; B+=w*.25; 
        A = Math.round(A*100.0)/100.0; B = Math.round(B*100.0)/100.0;

        System.out.println("Plan A costs "+A);
        System.out.println("Plan B costs "+B);
        if (A>B) System.out.println("Plan B is cheapest.");
        else if (B>A) System.out.println("Plan A is cheapest.");
        else System.out.println("Plan A and B are the same price.");
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
