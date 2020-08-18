// 03/21/2020
// https://dmoj.ca/problem/dmopc19c5p3
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C5P3CaptivatingConstructionChallenge {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int H = readInt(), V = readInt(); long ans = 0;
        for (int y=1;y<=H;y++) {
            for (int x=1;x<=V;x++) {
                int g = gcd(x, y), dy = y/g, dx = x/g;
                for (int r=y+dx, c=x+dy; r<=H && c<=V;r+=dx, c+=dy) {
                    ans += (long)(H-r) * (V-c);
                }
            }
        }
        System.out.println(ans + (long)H*(H-1)*V*(V-1)/4);
    }
    static int gcd(int x, int y) {
        if (y==0) return x;
        return gcd(y, x%y);
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
