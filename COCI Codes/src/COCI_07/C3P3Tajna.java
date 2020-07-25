// 04/12/2020
// https://dmoj.ca/problem/coci07c3p3
package COCI_07;

import java.util.*;
import java.io.*;

public class C3P3Tajna {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        String s = readLine();
        int sl = s.length(), sq = (int)Math.sqrt(sl), idx = 1;
        for (int i=sq;i>1;i--) {
            if (sl%i==0) {idx=i; break;}
        }
        List<Character> lis[] = new ArrayList[idx];
        for (int i=0;i<idx;i++) lis[i] = new ArrayList();
        for (int i=0;i<sl;i++) {
            lis[i%idx].add(s.charAt(i));
        }
        for (int i=0;i<idx;i++) {
            Iterator itr = lis[i].iterator();
            while(itr.hasNext()) System.out.print(itr.next());
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