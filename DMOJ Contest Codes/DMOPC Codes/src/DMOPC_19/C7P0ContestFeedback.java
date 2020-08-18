// 05/05/2020
// https://dmoj.ca/problem/dmopc19c7p0
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C7P0ContestFeedback {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        double a[] = new double[4+1], sum = 0;
        for (int i=1;i<=4;i++) {a[i] = readDouble(); sum+=a[i];}
        for (int i=1;i<4;i++) {
            for (int j=i+1;j<=4;j++) {
                System.out.printf("%.6f\n", (a[i]+a[j])/2);
            }
        }
        System.out.printf("%.6f\n", (sum-a[4])/3);
        System.out.printf("%.6f\n", (sum-a[3])/3);
        System.out.printf("%.6f\n", (sum-a[2])/3);
        System.out.printf("%.6f\n", (sum-a[1])/3);
        System.out.printf("%.6f\n", (sum)/4);
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