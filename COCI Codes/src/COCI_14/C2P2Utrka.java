// 11/11/2019
// https://dmoj.ca/problem/coci14c2p2
package COCI_14;

import java.util.*;
import java.io.*;

public class C2P2Utrka {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    
    public static void main (String[] args) throws IOException{
        int n = readInt();
        HashSet<String> h = new HashSet<>();
        for (int i=0;i<2*n-1;i++) {
            String temp = readLine();
            if (h.contains(temp)) h.remove(temp);
            else h.add(temp);                
        }
        Iterator<String> itr = h.iterator();
        while (itr.hasNext()) {
            System.out.println(itr.next());
        }
    }
    static String next () throws IOException {
        while (st == null || !st.hasMoreTokens())
                st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static long readLong () throws IOException {
        return Long.parseLong(next());
    }
    static int readInt () throws IOException {
        return Integer.parseInt(next());
    }
    static double readDouble () throws IOException {
        return Double.parseDouble(next());
    }
    static char readCharacter () throws IOException {
        return next().charAt(0);
    }
    static String readLine () throws IOException {
        return br.readLine().trim();
    }
}