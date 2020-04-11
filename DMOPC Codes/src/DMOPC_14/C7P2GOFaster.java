// 03/22/2020
//https://dmoj.ca/problem/dmopc14c6p2
package DMOPC_14;

import java.util.*;
import java.io.*;

public class C7P2GOFaster {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), L = readInt(); readInt();
        int max, min; max=min=L;
        for (int i=2;i<n;i++) {
            int a = readInt(), b = readInt();
            if (i==2) {max=min=L-b; L+=a;}
            else {
                min-=b;
                if(L>=b) {L-=b;}
                else {
                    b=b-L; L=0; max=max-b;
                }
                L+=a;
            }
        }
        if(min<=0) min=0;
        System.out.println(min+"\n"+max);
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
