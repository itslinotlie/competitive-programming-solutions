// 03/22/2020
// https://dmoj.ca/problem/cco14p4

import java.util.*;
import java.io.*;

public class P4WheresThatFuel {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), s = readInt(), max = 0, idx = 1;
        pt pt[] = new pt[n];
        for (int i=0;i<n;i++) pt[i] = new pt(readInt(), readInt());
        pt[s-1].vis=true; max+=pt[s-1].gain;
        Arrays.sort(pt);
        for (int i=0;i<n;i++) {
            if (pt[i].gain>=pt[i].lose && max-pt[i].lose>=0 && !pt[i].vis) {
                max+=pt[i].gain; max-=pt[i].lose; idx++;
            }
        }
        System.out.println(max+"\n"+idx);
    }
    static class pt implements Comparable<pt>{
        boolean vis = false;
        int gain, lose;
        pt(int g, int l) {gain=g;lose=l;}
        public int compareTo(pt a) {
            if (a.lose==lose) return Integer.compare(a.gain, gain);
            return -Integer.compare(a.lose, lose);
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
