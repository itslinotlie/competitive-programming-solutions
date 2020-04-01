// 11/11/2019
//https://dmoj.ca/problem/odd
package pp7;

import java.io.*;
import java.util.*;

public class TheOddNumber {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        int counter = readInt();
        for (int i=1;i<n;i++) {
            counter ^= readInt();
        }
        System.out.println(counter);
    }
    
    static String next () throws IOException {
        while (st == null || !st.hasMoreTokens())
                st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static int readInt () throws IOException {
        return Integer.parseInt(next());
    }
}