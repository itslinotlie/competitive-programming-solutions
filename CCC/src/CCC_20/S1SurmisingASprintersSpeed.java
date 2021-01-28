// 04/12/2020
// https://dmoj.ca/problem/ccc20s1
package CCC_20;

import java.util.*;
import java.io.*;

public class S1SurmisingASprintersSpeed {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        Map<Double, Double> map = new TreeMap();
        for (int i=0;i<n;i++) map.put(readDouble(), readDouble()); 
        double x1, y1, x2, y2, ans = -1; x1=y1=x2=y2=0;
        
        for (Map.Entry<Double, Double> e : map.entrySet()) {
            if (x1==y1 && x1==0) {x1 = e.getKey(); y1 = e.getValue();}
            else {
                x2=e.getKey(); y2=e.getValue();
                double m = Math.abs((y2-y1))/Math.abs((x2-x1));
                ans = Math.max(ans, m);
                x1=x2; y1=y2;
            }
        }
        System.out.println(ans);
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
