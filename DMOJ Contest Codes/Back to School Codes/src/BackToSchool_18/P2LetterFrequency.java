// 04/25/2020
// https://dmoj.ca/problem/bts18p2
package BackToSchool_18;

import java.util.*;
import java.io.*;

public class LetterFrequency {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        String word = readLine(); int wl = word.length();
        int psa[][] = new int[26][wl+2];
        for (int i=1;i<=wl;i++) {
            if (word.charAt(i-1)==' ') continue;
            int idx = word.charAt(i-1)-'a';
            psa[idx][i]++;
        }
        for (int i=0;i<26;i++) {
            for (int j=1;j<=wl;j++) psa[i][j] += psa[i][j-1];
        }
        int n = readInt();
        for (int i=0;i<n;i++) {
            String tmp[] = readLine().split("[ ]");
            int L = Integer.parseInt(tmp[0]), R = Integer.parseInt(tmp[1]), idx = tmp[2].charAt(0)-'a';
            System.out.println(psa[idx][R]-psa[idx][L-1]);
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
