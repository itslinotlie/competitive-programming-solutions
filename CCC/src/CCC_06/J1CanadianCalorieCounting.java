// 03/21/2020
// https://dmoj.ca/problem/ccc06j1
package CCC_06;

import java.util.*;
import java.io.*;

public class J1CanadianCalorieCounting {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int cnt = 0;
        switch(readInt()) { //burger choices
            case 1: cnt+=461; break;
            case 2: cnt+=431; break;
            case 3: cnt+=420; break;
            default: break;
        }
        switch(readInt()) { //side choices
            case 1: cnt+=100; break;
            case 2: cnt+=57; break;
            case 3: cnt+=70; break;
            default: break;
        }
        switch(readInt()) { //drink choices
            case 1: cnt+=130; break;
            case 2: cnt+=160; break;
            case 3: cnt+=118; break;
            default: break;
        }
        switch(readInt()) { //dessert choices
            case 1: cnt+=167; break;
            case 2: cnt+=266; break;
            case 3: cnt+=75; break;
            default: break;
        }
        System.out.println("Your total Calorie count is "+cnt+".");
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
