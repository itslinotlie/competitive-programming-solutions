// 05/22/2020
// https://dmoj.ca/problem/ecoo19r2p1
package ECOO_19;

import java.util.*;
import java.io.*;

public class R2P1Email {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int T=0;T<10;T++) {
            int n = readInt();
            Set<String> set = new HashSet();
            for (int i=0;i<n;i++) {
                String x = readLine().toLowerCase(), ans = "";
                boolean plus = false, at = false;
                for (int j=0;j<x.length();j++) {
                    if (x.charAt(j)=='.' && !at) continue;
                    else if (x.charAt(j)=='+' && !plus) plus = true;
                    else if (plus && x.charAt(j)!='@') continue;
                    else if (x.charAt(j)=='@') {plus = false; at = true; ans+=x.charAt(j);}
                    else if (x.charAt(j)=='.' && at) ans+=x.charAt(j);
                    else ans+=x.charAt(j);
                }
                set.add(ans);
            }
            System.out.println(set.size());
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
