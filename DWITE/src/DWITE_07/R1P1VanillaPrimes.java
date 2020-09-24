// 12/01/19
package DWITE_07;

import java.util.*;
import java.io.*;

public class R1P1VanillaPrimes {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        if (n<2) System.out.println("not");
        else if (isPrime(n)) System.out.println("prime");
        else System.out.println("not");
    }
    public static boolean isPrime (int n) { 
        int root = (int)Math.sqrt(n);
        if (n==2) return true;
        if (n%2==0) return false;
        for (int i=3;i<=root;i+=2) {
            if (n%i==0) return false;
        }
        return true;
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
