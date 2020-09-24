// 11/16/2019
// https://dmoj.ca/problem/vmss7wc16c2p2
package VM7WC_16;

import java.util.*;
import java.io.*;

public class SilverP2GG {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        String word = readLine();
        int n = readInt(), arr[] = new int[word.length()+2];
        for (int i=0;i<word.length();i++) {
            if (word.charAt(i)=='G') arr[i]++;
        }
        for (int i=1;i<=word.length();i++) arr[i]+=arr[i-1];
        for (int i=0;i<n;i++) {
            int L = readInt(), R = readInt();
            if (L==0 && R==0) System.out.println("0");
            else if (L==0) System.out.println(arr[R]);
            else System.out.println(arr[R]-arr[L-1]);
        }
    }
    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }    
    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }    
    static String readLine() throws IOException {
        return br.readLine().trim();
    }    
}
