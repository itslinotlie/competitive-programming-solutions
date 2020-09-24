// 04/29/2020
// https://dmoj.ca/problem/coci14c5p1
package COCI_14;

import java.util.*;
import java.io.*;

public class C5P1Funghi {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int arr[] = new int[11], max = -1;
        for (int i=0;i<11;i++) {
            if (i<8) arr[i] = readInt();
            else arr[i] = arr[i%8];
            if (i>=3) {
                int sum = 0;
                for (int j=i;j>i-4;j--) sum+=arr[j];
                max = Math.max(max, sum);
            }
        }
        System.out.println(max);
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