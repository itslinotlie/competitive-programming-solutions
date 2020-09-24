// 04/11/2020
//https://dmoj.ca/problem/waterloow2017b
package pp10;

import java.util.*;
import java.io.*;

public class VeraAndLCS {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), k = readInt(), frq[] = new int[26];
        String a = readLine();
        for (int i=0;i<n;i++) frq[a.charAt(i)-'a']++;
        int min = n+1; char c = ' ';
        for (int i=0;i<26;i++) {
            if (frq[i]<min) {
                min = frq[i];
                c = (char)(i+'a');
            }
        }
        if (min>k || k>n) {System.out.println("WRONGANSWER"); return;}
        for (int i=0;i<n;i++) {
            if (min < k) {
                System.out.print(a.charAt(i));
                if(a.charAt(i)!=c) min++;
            }
            else System.out.print(c);
        }
        System.out.println();
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
