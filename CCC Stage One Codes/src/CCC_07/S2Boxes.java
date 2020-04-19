// 03/22/2020
//https://dmoj.ca/problem/ccc07s2
package CCC_07;

import java.util.*;
import java.io.*;

public class S2Boxes {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(); trio o[] = new trio[n];
        for (int i=0;i<n;i++) {
            int a[] = {readInt(), readInt(), readInt()};
            Arrays.sort(a);
            o[i] = new trio(a[0], a[1], a[2]);
        }
        Arrays.sort(o);
        
        int m = readInt(); trio t[] = new trio[m];
        for (int i=0;i<m;i++) {
            int a[] = {readInt(), readInt(), readInt()};
            Arrays.sort(a);
            t[i] = new trio(a[0], a[1], a[2]);
        }
        for (int i=0;i<m;i++) {
            boolean FLAG = true;
            for (int j=0;j<n && FLAG;j++) {
                if (t[i].a<=o[j].a && t[i].b<=o[j].b && t[i].c<=o[j].c) {System.out.println(o[j].v); FLAG = false;}
            }
            if (FLAG) System.out.println("Item does not fit.");
        }
    }
    static class trio implements Comparable<trio>{
        int a,b,c;
        long v;
        trio (int a0, int b0, int c0) {a=a0;b=b0;c=c0;v=(long)a*b*c;}
        public int compareTo(trio n) {
            return -Long.compare(n.v, v);
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
