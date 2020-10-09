// 09//20//2020
// https://dmoj.ca/problem/acsl1p3
package pp10;

import java.math.BigInteger;
import java.util.*;
import java.io.*;

public class Zeros {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        BigInteger x = new BigInteger("1");
        int n = readInt(), frq = 0;
        for (int i=2;i<=n;i++) {
            x = x.multiply(BigInteger.valueOf(i));
        }
        String s = x.toString();
        for (int i=0;i<s.length();i++) if(s.charAt(i)=='0') frq++;
        System.out.println(frq);
    }

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
}