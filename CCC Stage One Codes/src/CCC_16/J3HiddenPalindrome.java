// 04/04/2020
//https://dmoj.ca/problem/ccc16j3
package CCC_16;

import java.util.*;
import java.io.*;

public class J3HiddenPalindrome {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        String word = readLine(); int wl = word.length(), max = -1, cur = 0;
        for (int i=1;i<wl-1;i++) {
            cur = 1;
            for (int j=1;j<=wl;j++) {
                if (i-j<0 || i+j>=wl) break;
                if (word.charAt(i-j)==word.charAt(i+j)) cur+=2;
                else break;
            }
            max = Math.max(max, cur);
        }
        for (int i=1;i<wl-1;i++) {
            cur = 2;
            if (word.charAt(i)==word.charAt(i+1)) {
                for (int j=1;j<=wl;j++) {
                if (i-j<0 || i+j+1>=wl) break;
                if (word.charAt(i-j)==word.charAt(i+j+1)) cur+=2;
                }
            }
            max = Math.max(max, cur);
        }
        System.out.println(max);
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
