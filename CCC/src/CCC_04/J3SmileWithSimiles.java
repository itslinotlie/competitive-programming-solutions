// 03/21/2020
// https://dmoj.ca/problem/ccc04j3
package CCC_04;

import java.util.*;
import java.io.*;

public class J3SmileWithSimiles {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), m = readInt();
        String N[] = new String[n], M[] = new String[m];
        for (int i=0;i<n;i++) N[i] = readLine();
        for (int i=0;i<m;i++) M[i] = readLine();
        
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                System.out.println(N[i]+" as "+M[j]);
            }
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
