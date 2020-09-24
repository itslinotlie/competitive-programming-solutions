// 05/21/2020
// https://dmoj.ca/problem/coci15c2p1
package COCI_15;

import java.util.*;
import java.io.*;

public class C2P1Marko {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static Map<Character, Integer> map = new TreeMap();
    public static void main (String[] args) throws IOException {
        for (int i=0;i<15;i++) map.put((char)(i+'a'), i/3+2);
        for (int i=15;i<19;i++) map.put((char)(i+'a'), 7);
        for (int i=19;i<22;i++) map.put((char)(i+'a'), 8);
        for (int i=22;i<26;i++) map.put((char)(i+'a'), 9);
        int n = readInt(), ans = 0;
        String a[] = new String[n];
        for (int i=0;i<n;i++) a[i] = readLine();
        String x = readLine();
        for (int i=0;i<n;i++) {
            if(compare(a[i], x)) ans++;
        }
        System.out.println(ans);
    }
    static boolean compare(String a, String x) {
        if (a.length()!=x.length()) return false;
        for (int i=0;i<a.length();i++) {
            if (get(a.charAt(i))!=Integer.parseInt(Character.toString(x.charAt(i)))) return false;
        }
        return true;
    }
    static int get(char x) {
        return map.get(x);
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