// 12/21/19
//https://dmoj.ca/problem/oly18decp5
package pp5;

import java.util.*;
import java.io.*;

public class GuessingGame {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), a = readInt(), b = readInt(), counter = 0;
        
        while (a!=n && b!=n) {
            int temp = (a+b)/2;
            if (n>temp) a = temp;
            else b = temp;
            counter++;   
        }
        System.out.println(counter);
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
