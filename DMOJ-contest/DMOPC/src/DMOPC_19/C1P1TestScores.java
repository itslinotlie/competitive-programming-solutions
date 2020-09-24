// 06/08/2020
// https://dmoj.ca/problem/dmopc19c1p1
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C1P1TestScores {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int t=readInt();t>0;t--) {
            long n = readLong(), a  = readLong(), b = readLong(), k = readLong();
            if (n*a<k) {System.out.println("-1"); continue;}
            System.out.println(bs(n, a, b, k));
        }
    }
    static long bs(long n, long a, long b, long k) {
        long low = 0, high = n;
        while(low<=high) {
            long mid = low - (low-high)/2;
            if (mid*a-(n-mid)*b<k) low = mid+1;
            else high = mid-1;
        }
        return low;
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
