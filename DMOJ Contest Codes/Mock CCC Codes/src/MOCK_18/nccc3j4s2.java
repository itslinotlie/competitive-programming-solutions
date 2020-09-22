// 09/17/2019
// https://dmoj.ca/problem/nccc3j4s2
package MOCK_18;

import java.util.*;
import java.io.*;

public class ncc3j4s2 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int[n], arrP[] = new int[n];
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                arr[j] = in.nextInt();
            } Arrays.sort(arr);
            arrP[i] = arr[n/2];
        }
        Arrays.sort(arrP);
        System.out.println(arrP[n/2]);
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