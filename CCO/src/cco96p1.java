// 06/01/2020
// https://dmoj.ca/problem/cco96p1

import java.util.*;
import java.io.*;

public class P1TrainSwapping {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int T=readInt();T>0;T--) {
            int n = readInt(), a[] = new int[n+1], ans = 0;
            for (int i=1;i<=n;i++) a[i] = readInt();
            for (int i=1;i<=n;i++) {
                while(a[i]!=i) {
                    for (int j=n;j>=i+1;j--) {
                        if (a[j]!=i) continue;
                        a[j-1]^=a[j];
                        a[j]^=a[j-1];
                        a[j-1]^=a[j];
                        ans++;
                    }
                }
            }
            System.out.println("Optimal train swapping takes "+ans+" swaps.");
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
