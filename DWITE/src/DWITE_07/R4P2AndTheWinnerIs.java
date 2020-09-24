// 03/15/2020
//https://dmoj.ca/problem/dwite07c4p2
package DWITE_07;

import java.util.*;
import java.io.*;

public class R4P2AndTheWinnerIs {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int T=0;T<5;T++) {
            Pair pair[] = new Pair[5];
            for (int i=0;i<5;i++) {
                String tmp[] = readLine().split("[ ]");
                String t = "";
                for (int j=1;j<tmp.length;j++) t+=tmp[j]+" ";
                pair[i] = new Pair(i, Integer.parseInt(tmp[0]), t.substring(0, t.length()-1));
            }
            Arrays.sort(pair);
            for (int j=0;j<5;j++) System.out.println(pair[j].n);
        }
    }
    static class Pair implements Comparable<Pair>{
        int i,s;
        String n;
        Pair (int i0, int s0, String n0) {i = i0; s = s0; n = n0;}
        public int compareTo(Pair a) {
            if (a.s==s) return -Integer.compare(a.i, i);
            else return Integer.compare(a.s, s);
        }
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
