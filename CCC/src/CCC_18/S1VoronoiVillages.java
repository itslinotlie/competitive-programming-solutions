// 03/20/2020
//https://dmoj.ca/problem/ccc18s1
package CCC_18;

import java.util.*;
import java.io.*;

public class S1VoronoiVillages {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), arr[] = new int[n];
        double min = Double.MAX_VALUE;
        for (int i=0;i<n;i++) arr[i] = readInt(); Arrays.sort(arr);
        for (int i=1;i<n-1;i++) {
            double L = (arr[i]-arr[i-1])/2.0, R = (arr[i+1]-arr[i])/2.0;
            min = Math.min(min, L+R);
        }
        System.out.printf("%.1f\n", min);
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
