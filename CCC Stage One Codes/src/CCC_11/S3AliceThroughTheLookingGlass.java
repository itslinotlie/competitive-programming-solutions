// 03/18/2020
//https://dmoj.ca/problem/ccc11s3
package CCC_11;

import java.util.*;
import java.io.*;

public class S3AliceThroughTheLookingGlass {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int T = readInt();
        for (int t=0;t<T;t++) {
            long m = readLong(), x = readLong(), y = readLong();
            System.out.println(fun(m, x, y)? "crystal":"empty");
        }
    }
    static boolean fun(long m, long x, long y) {
        if (m==1) {
           return x==1 && y==0 || x==2 && y==0 || x==3 && y==0 || x==2 && y==1;
        }
        long x1 = (long)Math.pow(5, m-1), x2 = 2*x1, x3 = 3*x1, x4 = 4*x1;
        long y0 = 0, y1 = (long)Math.pow(5, m-1), y2 = 2*y1, y3 = 3*y1;
        
        if (x1<=x && x<x4 && y0<=y && y<y1) return true;
        if (x2<=x && x<x3 && y0<=y && y<y2) return true;
        if (x<x1 || x4<=x) return false;
        if (x1<=x && x<x2 && y2<=y) return false;
        if (x2<=x && x<x3 && y3<=y) return false;
        if (x3<=x && x<x4 && y2<=y) return false;
        
        
        if ((x1<=x && x<x2 && y0<=y && y<y2)||(x2<=x && x<x3 && y0<=y && y<=y3)||(x3<=x && x<x4 && y0<=y && y<=y2)) {
            return fun(m-1, x%(long)Math.pow(5, m-1), y%(long)Math.pow(5, m-1));
        }
        return false;
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