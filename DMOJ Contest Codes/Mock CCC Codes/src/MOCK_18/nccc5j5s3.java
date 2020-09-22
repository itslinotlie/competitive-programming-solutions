// 03/14/2020
// https://dmoj.ca/problem/nccc5j5s3
package MOCK_18;

import java.util.*;
import java.io.*;

public class nccc5j5s3 {
    public static void main (String[] args) throws IOException {
        int N = readInt(), M = readInt();
        List<Integer> adj[] = new LinkedList[N+1];
        ArrayList<String> list = new ArrayList();
        for (int i=1;i<=N;i++) adj[i] = new LinkedList();
        for (int i=0,e,v;i<M;i++) {
            e = readInt(); v = readInt();
            adj[e].add(v);
            list.add(e+" "+v);
        }
        for (int i=0;i<M;i++) {
            String tmp[] = list.get(i).split("[ ]");
            int a = Integer.parseInt(tmp[0]), b = Integer.parseInt(tmp[1]);
            adj[a].remove(new Integer(b));
            Queue<Integer> q = new LinkedList(); boolean vis[] = new boolean[N+1];
            q.add(1); vis[1] = true;
            boolean FLAG = true;
            while (!q.isEmpty() && FLAG) {
                int cur = q.poll();
                for (int nxt : adj[cur]) {
                    if (nxt == N) {FLAG = false; break;}
                    else if (!vis[nxt]) {vis[nxt] = true; q.add(nxt);}
                }
            }
            System.out.println(FLAG? "NO" : "YES");
            adj[a].add(b);
        }
    }
    
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;

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