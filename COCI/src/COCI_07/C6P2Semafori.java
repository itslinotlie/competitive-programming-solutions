// 04/12/2020
// https://dmoj.ca/problem/coci07c6p2
package COCI_07;

import java.util.*;
import java.io.*;

public class C6P2Semafori {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), L = readInt(), ans = 0, idx = 0; pt pt[] = new pt[n];
        boolean vis[] = new boolean[L+1];
        for (int i=0;i<n;i++) {
            pt[i] = new pt(readInt(), readInt(), readInt());
            vis[pt[i].d] = true;
        }
        
        for (int i=1;i<=L;i++) {
            if (vis[i]) {
                int tmp = ans%pt[idx].c; 
                if (tmp>pt[idx].r) ans++;
                else ans+=(pt[idx].r-tmp+1);
                ++idx;
            } else ans++;
        }
        System.out.println(ans-1);
    }
    static class pt {
        int d, r, g, c;
        public pt(int d, int r, int g) {this.d=d;this.r=r;this.g=g;c=(r+g);}
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
