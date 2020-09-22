// 03/20/2020
// https://dmoj.ca/problem/nccc2j3s1
package MOCK_18;

import java.util.*;
import java.io.*;

public class nccc2j3s1 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        long arr[] = new long[n+1];
        for (int i=1;i<=n;i++) arr[i] = readInt(); Arrays.sort(arr);
        for (int i=1;i<=n;i++) arr[i] += arr[i-1];
        if (n==1) System.out.println(0);
        else if (n==2) System.out.println(Math.min(arr[1],arr[2]-arr[1]));
        else System.out.println(Math.min(arr[n]-(arr[n]-arr[n-1]),arr[n]/2));
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