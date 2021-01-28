// 03/21/2020
// https://dmoj.ca/problem/ccc15s1
package CCC_15;

import java.util.*;
import java.io.*;

public class S1ZeroThatOut {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        Stack<Integer> s = new Stack();
        int n = readInt();
        for (int i=0;i<n;i++) {
            int tmp = readInt();
            if (tmp!=0) s.add(tmp);
            else s.pop();
        }
        int cnt = 0;
        while (!s.isEmpty()) cnt+=s.pop();
        System.out.println(cnt);
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
