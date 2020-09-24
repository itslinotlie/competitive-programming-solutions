// 04/04/2020
// https://dmoj.ca/problem/ccc05j3
package CCC_05;

import java.util.*;
import java.io.*;

public class J3ReturningHome {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        Stack<String> s = new Stack();
        String word = readLine();
        while(!word.equals("SCHOOL")) {
            s.add(word); word = readLine();
        }
        boolean swap = true;
        while(!s.isEmpty()) {
            String tmp = s.pop();
            if (swap) {
                switch(tmp) {
                    case "R": System.out.print("Turn LEFT "); break;
                    case "L": System.out.print("Turn RIGHT "); break;
                }
                swap = false;
            }
            else {
                System.out.println("onto "+tmp+" street.");
                swap = true;
            }
        }
        System.out.println("into your HOME.");
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
