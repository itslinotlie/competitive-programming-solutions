// 04/27/2020
// https://dmoj.ca/problem/wac4p1
package WAC_4;

import java.util.*;
import java.io.*;

public class P1ZeyusZanyZort {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int arr[];

    public static void main(String[] args) throws IOException{
        arr = new int[readInt()]; 
        int al = arr.length, changes = readInt();
        for (int i=0;i<al;i++) arr[i] = readInt();
        for (int i=0;i<changes;i++) {
            int s = readInt(), start = readInt(), end = readInt();
            sort(s, start, end);
        }
        for (int i=0;i<arr.length;i++) System.out.print(i==arr.length-1? arr[i]+"\n":arr[i]+" ");
    }

    private static void sort(int f, int s, int e) {
        int narr[] = new int[e-s+1], nl = narr.length;
        for (int i=0;i<nl;i++) narr[i] = arr[i+s-1];
        Arrays.sort(narr);
        if (f == 2) {
            for(int i=0;i<nl/2;i++) {
                int tmp = narr[i];
                narr[i] = narr[nl-i-1];
                narr[nl-1-i] = tmp;
            }    
        }
        for (int i=0;i<nl;i++) {
            arr[i + s - 1] = narr[i];
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
