// 04/27/2020
// https://dmoj.ca/problem/seed1
package pp3;

import java.util.*;
import java.io.*;

public class Ship {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        String w = readLine();
        boolean a[] = new boolean[5];
        Arrays.fill(a, true);
        if (w.contains("B")) a[0]=false;
        if (w.contains("F")) a[1]=false;
        if (w.contains("T")) a[2]=false;
        if (w.contains("L")) a[3]=false;
        if (w.contains("C")) a[4]=false;
        
        boolean FLAG = true;
        for (int i=0;i<5;i++) {
            if (a[i]) {System.out.print(fun(i)); FLAG = false;}
        }
        if (FLAG) System.out.println("NO MISSING PARTS");
    }
    static String fun(int i) {
        switch (i) {
            case 0: return "B";
            case 1: return "F";
            case 2: return "T";
            case 3: return "L";
            case 4: return "C";
        }
        return "";
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
