// 03/18/2020
// https://dmoj.ca/problem/vmss7wc15c2p2
package VM7WC_15;

import java.util.*;
import java.io.*;

public class SilverP24Nations1Secret {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int wl = readInt(); String w = next();
        long base = 131, bk[] = new long[wl+1];
        bk[1] = 131; for (int i=2;i<=wl;i++) bk[i] = bk[i-1]*131;
        
        long a[] = new long[wl+1];
        a[1] = w.charAt(0); for (int i=2;i<=wl;i++) a[i] = a[i-1]*base+w.charAt(i-1);
        int max = 1; String ans = "";
            for (int i=1;i<wl;i++) {
                for (int j=1;j<=wl/2;j++) {
                    if (i-j-1<0 || i+j>wl) break;
                    long x = a[i+j]-a[i+j-1]*131;
                    long y = a[i-j]-a[i-j-1]*131;
                    if(x==y) {
                        if(2*j+1>max) {
                            max = 2*j + 1;
                            ans = w.substring(i-j-1, i+j);
                        }
                    }
                    else break;
                }
            }            
            for (int i=1;i<wl;i++) {
                if(a[i]-a[i-1]*131!=a[i+1]-a[i]*131) continue;
                for (int j=1;j<=wl/2;j++) {
                    if (i-j-1<0 || i+j+1>wl) break;
                    long x = a[i+j+1]-a[i+j]*131;
                    long y = a[i-j]-a[i-j-1]*131;
                    if(x==y) {
                        if(2+2*j>max) {
                            max = 2*j+2;
                            ans = w.substring(i-j-1, i+j+1);
                        }
                    }
                    else break;
                }
            }  
        if (max==1) {
            System.out.println(w.charAt(0));
            System.out.println(max);
        }
        else {
            System.out.println(ans);
            System.out.println(max);
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
