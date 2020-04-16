// 04/15/2020
//https://dmoj.ca/problem/gfssoc1s1
package pp5;

import java.util.*;
import java.io.*;

public class FriendshipIsANumber {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(); pair pair[] = new pair[n];
        for (int i=1;i<=n;i++) {
            int t = readInt(), sum = 1;
            for (int j=1;j<=t;j++) sum*=readInt();
            pair[i-1] = new pair(i, sum);
        } Arrays.sort(pair);
        for (int i=0;i<=2;i++) System.out.println(pair[i].id);
        
    }
    static class pair implements Comparable<pair>{
        long id, value;
        public pair (long id, long value) {this.id=id;this.value=value;}
        public int compareTo(pair a) {return Long.compare(a.value, value);}
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
