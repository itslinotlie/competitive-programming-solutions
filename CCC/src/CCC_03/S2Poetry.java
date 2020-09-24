// 03/20/2020
// https://dmoj.ca/problem/ccc03s2
package CCC_03;

import java.util.*;
import java.io.*;

public class S2Poetry {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        for (int T=0;T<n;T++) {
            String arr[] = new String[4];
            for (int i=0;i<4;i++) {
                arr[i] = readLine().toLowerCase();
                arr[i] = arr[i].substring(arr[i].lastIndexOf(" ")+1);
            }
            String a = vowel(arr[0]);
            String b = vowel(arr[1]);
            String c = vowel(arr[2]);
            String d = vowel(arr[3]);
            
            if (a.equals(b) && b.equals(c) && c.equals(d)) System.out.println("perfect");
            else if (a.equals(b) && c.equals(d)) System.out.println("even");
            else if (a.equals(c) && b.equals(d)) System.out.println("cross");
            else if (a.equals(d) && b.equals(c)) System.out.println("shell");
            else System.out.println("free");
        }
    }
    static String vowel (String s) {
        int a = 0;
        for (int i=0;i<s.length();i++) {
            if (s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u') a = i;
        }
        return s.substring(a);
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
