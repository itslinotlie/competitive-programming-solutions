// 04/04/2020
// https://dmoj.ca/problem/mwc15c4p4
package MWC_15;

import java.util.*;
import java.io.*;

public class C4P4DealingWithKnots {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        List<Integer> adj[] = new ArrayList[n+1];
        for (int i=1;i<=n;i++) adj[i] = new ArrayList();
        for (int i=0;i<n;i++) {
            int a = readInt(), b = readInt();
            adj[a].add(b);
        }
        int a = readInt(), b = readInt();
        Queue<Integer> q = new LinkedList();
        boolean vis[] = new boolean[n+1];
        q.add(a); vis[a] = true;
        while(!q.isEmpty()) {
            int cur = q.poll();
            for (int nxt : adj[cur]) {
                if (!vis[nxt]) {
                    q.add(nxt); vis[nxt] = true; 
                }
            }
        }
        System.out.println(vis[b]? "Tangled":"Not Tangled");
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
