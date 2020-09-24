// 05/01/2020
// https://dmoj.ca/problem/coci06c6p1
package COCI_06;

import java.util.*;
import java.io.*;

public class C6P1Prase {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), tot = 0, cnt = 0;
        Map<String, Integer> map = new HashMap();
        for (int i=0;i<n;i++) {
            String tmp = readLine();
            if (map.getOrDefault(tmp, 0)>tot-map.getOrDefault(tmp, 0)) cnt++;
            tot++;
            map.put(tmp, map.getOrDefault(tmp, 0)+1);
        }
        System.out.println(cnt);
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
