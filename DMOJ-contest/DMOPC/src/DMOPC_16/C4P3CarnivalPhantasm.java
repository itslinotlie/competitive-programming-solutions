// 09//07//2020
package DMOPC_16;

import java.util.*;
import java.io.*;

public class dmopc16c4p3 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        List<TreeSet<pair>> candy = new ArrayList();
        for (int i=0;i<=100;i++) candy.add(new TreeSet());
        int N = readInt(), S = readInt(), d[] = new int[N+1];
        for (int i=1;i<=N;i++) d[i] = readInt();
        for (int i=1, s, a;i<=S;i++) {
            s = readInt(); a = readInt();
            candy.get(a).add(new pair(d[s], s));
        }
        int Q = readInt();
        for (int i=1, x, k=0;i<=Q;i++) {
            String s = next(); x = readInt();
            if(!s.equals("Q")) k = readInt();
            switch(s) {
                case "A": candy.get(k).add(new pair(d[x], x)); break;
                case "S": candy.get(k).remove(new pair(d[x], x)); break;
                case "E": for (int j=0;j<=100;j++) candy.get(j).remove(new pair(d[x], x)); d[x] = k; break;
                case "Q": System.out.println(candy.get(x).isEmpty()? "-1":candy.get(x).first().id); break;
            }
        }
    }
    static class pair implements Comparable<pair> {
        int d, id;
        public pair(int d, int id) {this.d=d; this.id=id;}
        public int compareTo(pair a) {
            if(a.d==d) return Integer.compare(id, a.id);
            return Integer.compare(d, a.d);
        }
    }

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }

    static String readLine() throws IOException {
        return br.readLine().trim();
    }

    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }

    static long readLong() throws IOException {
        return Long.parseLong(next());
    }

    static double readDouble() throws IOException {
        return Double.parseDouble(next());
    }
}