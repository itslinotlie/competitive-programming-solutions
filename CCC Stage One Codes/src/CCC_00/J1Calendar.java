// 03/24/2020
//https://dmoj.ca/problem/ccc00j1
package CCC_00;

import java.util.*;
import java.io.*;

public class J1Calendar {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int a = readInt(), b = readInt();
        System.out.println("Sun Mon Tue Wed Thr Fri Sat");
        for(int c=(4*(a-1))+2;c>2;c--) System.out.print(" ");
	
	for(int c=1;c<=b;c++,a++) {
            if(a==8) {
                System.out.println();
                a = 1;
            }
            
            if(c<=9) System.out.print("  "+c);
            else System.out.print(" "+c);
            if(c!=b && a!=7) System.out.print(" ");
	}
        System.out.println();
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
