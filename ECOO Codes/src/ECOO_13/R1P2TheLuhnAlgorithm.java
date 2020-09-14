// 03/22/2020
// 
package ECOO_13;

import java.util.*;
import java.io.*;

public class R1P2TheLuhnAlgorithm {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int T=0;T<5;T++) {
            String a[] = readLine().split("[ ]"); int al = a.length; String ans = "";
            for (int i=0;i<al;i++) {
                int odd, even; odd=even=0;
                boolean b = true;
                for (int j=a[i].length()-1;j>=0;j--) {
                    char c = a[i].charAt(j); String s = Character.toString(c);
                    if (b) {
                        even+=get(Integer.parseInt(s)*2);
                        b=false;
                    }
                    else {
                        odd+=Integer.parseInt(s);
                        b=true;
                    }
                }
                ans+=find(odd+even);
            }
            System.out.println(ans);
        }
    }
    static int get(int t) {
        String w = Integer.toString(t);
        int sum = 0;
        for (int i=0;i<w.length();i++) sum+=Integer.parseInt(Character.toString(w.charAt(i)));
        return sum;
    }
    static String find(int t) {
        for (int i=0;i<=9;i++) {
            if ((i+t)%10==0) return Integer.toString(i);
        }
        return "";
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
