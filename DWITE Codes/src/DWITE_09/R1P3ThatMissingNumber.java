// 07/04/2020
// https://dmoj.ca/problem/dwite09c1p3
package DWITE_09;

import java.util.*;
import java.io.*;

public class R1P3ThatMissingNumber {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int t=1;t<=5;t++) {
            int n = readInt(); Set<Integer> set = new HashSet();
            for (int i=1;i<=n+1;i++) set.add(i);
            for (int i=1;i<=n;i++) {
                int x = readInt();
                set.remove(x);
            }
            Iterator itr = set.iterator();
            while(itr.hasNext()) System.out.println(itr.next());
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
