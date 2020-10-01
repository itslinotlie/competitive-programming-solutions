// 05/08/2020
// https://dmoj.ca/problem/ecoo19r1p2
package ECOO_19;

import java.util.*;
import java.io.*;

public class R1P2LSystemsGo {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int T=0;T<10;T++) {
            int r = readInt(), t = readInt();
            String a = next(), bk[] = new String[26];
            int al = a.length();
            for (int i=0;i<r;i++) bk[next().charAt(0)-'A'] = next();
            long frq[][] = new long[2][26];
            for(int i=0;i<al;i++) frq[0][a.charAt(i)-'A']++;
            char F = a.charAt(0), L = a.charAt(al-1);
            for (int i=0;i<t;i++) {
                F = bk[F-'A'].charAt(0); 
                L = bk[L-'A'].charAt(bk[L-'A'].length()-1);
                for (int j=0;j<26;j++) {
                    if (frq[0][j]==0) continue;
                    for (int k=0;k<bk[j].length();k++) {
                        frq[1][bk[j].charAt(k)-'A'] += frq[0][j];
                    }
                }
                frq[0] = Arrays.copyOf(frq[1], frq[1].length);
                Arrays.fill(frq[1], 0);
            }
            long len = 0;
            for (int j=0;j<26;j++) len+=frq[0][j];
            System.out.println(F+""+L+" "+len);
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