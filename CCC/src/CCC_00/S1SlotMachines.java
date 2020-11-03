// 03/24/2020
// https://dmoj.ca/problem/ccc00s1
package CCC_00;

import java.util.*;
import java.io.*;

public class S1SlotMachines {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), a = readInt(), b = readInt(), c = readInt(), cnt = 0, m=0;
        while (n>0) {
            switch(m) {
                case 0:
                    a++; n--; cnt++; m++;
                    if (a==35) {n+=30; a=0;} 
                    break;
                case 1:
                    b++; n--; cnt++; m++;
                    if (b==100) {n+=60; b=0;}
                    break;
                case 2:
                    c++; n--; cnt++; m=0;
                    if (c==10) {n+=9; c=0;}
                    break;
            }
        }
        System.out.println("Martha plays "+cnt+" times before going broke.");
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