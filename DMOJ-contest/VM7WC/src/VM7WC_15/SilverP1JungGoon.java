// 03/29/2020
// https://dmoj.ca/problem/vmss7wc15c1p2
package VM7WC_15;

import java.util.*;
import java.io.*;

public class SilverP1JungGoon {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, a[];
    public static void main (String[] args) throws IOException {
        int T = readInt();
        for (int t=0;t<T;t++) {
            n = readInt(); a = new int[n+1]; int ans = 0, idx = 1;
            for (int i=1;i<=n;i++) a[i] = readInt();
            while (!sort()) {
                for (int i=n;i>=1;i--) {
                    if (a[i]!=idx || i==idx) continue;
                    for (int j=i;j>idx;j--) {
                        int tmp = a[j];
                        a[j] = a[j-1];
                        a[j-1] = tmp;
                        ans++;
                    }  
                }
                idx++;
            }
            System.out.println(ans);
        }
    }
    static boolean sort() {
        for (int i=1;i<=n;i++) {
            if (i!=a[i]) return false;
        }
        return true;
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
