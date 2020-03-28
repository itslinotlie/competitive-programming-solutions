// 02/17/2020
//https://dmoj.ca/problem/ccc17s1
package CCC_17;

import java.util.*;
import java.io.*;

public class S1SumGame {
    public static void main (String[] args) throws IOException{
        int n = readInt(), a[] = new int[n+1], b[] = new int[n+1];
        for (int i=1;i<=n;i++) a[i] = readInt()+a[i-1];
        for (int i=1;i<=n;i++) b[i] = readInt()+b[i-1];
        
        for (int i=n;i>=0;i--) {
            if (a[i]==b[i]) {System.out.println(i);break;}
        }
    }
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static String readLine() throws IOException {
        return br.readLine().trim();
    }      
    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }    
    static long readLong() throws IOException {
        return Long.parseLong(next());
    }
    static double readDouble() throws IOException {
        return Double.parseDouble(next());
    }
    static char readCharacter() throws IOException {
        return next().charAt(0);
    }
}