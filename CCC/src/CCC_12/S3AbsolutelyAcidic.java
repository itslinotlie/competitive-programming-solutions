// 04/02/2020
//https://dmoj.ca/problem/ccc12s3
package CCC_12;

import java.util.*;
import java.io.*;

public class S3AbsolutelyAcidic {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(), MV = (int)1e3; pair s[] = new pair[MV+1];
        for (int i=0;i<=MV;i++) s[i] = new pair(i);
        for (int i=0;i<n;i++) {
            int tmp = readInt();
            s[tmp].frq++;
        }
        Arrays.sort(s);
        int a1 = s[0].value, b1 = Integer.MAX_VALUE, m1 = s[0].frq, cnt = 0;
        int a2 = Integer.MIN_VALUE, b2 = Integer.MAX_VALUE, m2 = -1;
        for (int i=0;i<=MV;i++) {
            if (s[i].frq==m1) {b1 = Math.min(b1, s[i].value); cnt++;}
            else if (cnt==1) {
                m2 = s[i].frq;
                a2 = s[i].value;
            }
            else if (s[i].frq==m2) b2 = Math.min(b2, s[i].value);
        }
        if (a2<0) {System.out.println(a1-b1);}
        else {System.out.println(a1-b2>a2-b1? a1-b2:a2-b1);}     
    }
    static class pair implements Comparable<pair>{
        int value, frq;
        public pair (int v) {value=v;}
        public int compareTo(pair a) {
//            if (a.frq==0) return 0;
            if (a.frq==frq) return Integer.compare(a.value, value);
            return Integer.compare(a.frq, frq);
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
