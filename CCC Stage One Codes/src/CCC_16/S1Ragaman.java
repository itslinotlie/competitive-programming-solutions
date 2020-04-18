// 04/18/2020
//https://dmoj.ca/problem/ccc16s1
package CCC_16;

import java.util.*;
import java.io.*;

public class S1Ragaman {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int frq[] = new int[26];
        String a = readLine(), b = readLine();
        for (int i=0;i<a.length();i++) frq[a.charAt(i)-'a']++;
        boolean ans = true;
        for (int i=0;i<b.length() && ans;i++) {
            if (b.charAt(i)=='*') continue;
            if (frq[b.charAt(i)-'a']==0) ans = false;
            else frq[b.charAt(i)-'a']--;
        }
        System.out.println(ans? "A":"N");
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
