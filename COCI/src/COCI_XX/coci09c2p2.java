// 05/16/2020
// https://dmoj.ca/problem/coci17c2p2
package COCI_XX;

import java.util.*;
import java.io.*;

public class C2P2ZigZag {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), k = readInt();
        List<String> lis[] = new LinkedList[26];
        for (int i=0;i<26;i++) lis[i] = new LinkedList();
        for (int i=0;i<n;i++) {
            String x = readLine();
            lis[x.charAt(0)-'a'].add(x);
        }
        for (int i=0;i<26;i++) Collections.sort(lis[i]);
        for (int i=0;i<k;i++) {
            int x = readLine().charAt(0)-'a';
            String tmp = lis[x].get(0);
            System.out.println(tmp);
            lis[x].remove(0);
            lis[x].add(tmp);
        }
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
