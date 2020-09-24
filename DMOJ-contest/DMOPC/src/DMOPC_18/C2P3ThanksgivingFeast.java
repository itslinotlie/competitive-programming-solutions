// 04/25/2020
// https://dmoj.ca/problem/dmopc18c2p3
package DMOPC_18;

import java.util.*;
import java.io.*;

public class C2P3ThanksgivingFeast {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, m, k, a, b, arr[];
    static List<Integer> adj[];
    static int dis[][];
    public static void main (String[] args) throws IOException {
        n = readInt(); m = readInt(); k = readInt(); a = readInt(); b = readInt();
        arr = new int[k+1]; adj = new ArrayList[n+1]; dis = new int[2][n+1];
        for (int i=1;i<=n;i++) adj[i] = new ArrayList();
        for (int i=1;i<=k;i++) arr[i] = readInt();
        for (int i=0;i<m;i++) {
            int x = readInt(), y = readInt();
            adj[x].add(y); adj[y].add(x);
        }
        bfs(a, 0);
        bfs(b, 1);
        int ans = 0x3f3f3f3f;
        for (int i=1;i<=k;i++) {
            int tmp = arr[i];
            ans = Math.min(ans, dis[0][tmp]+dis[1][tmp]);
        }
        System.out.println(ans);
    }
    static void bfs(int st, int idx) {
        Queue<Integer> q = new LinkedList();
        boolean vis[] = new boolean[n+1];
        q.add(st);
        vis[st] = true; dis[idx][st] = 0;
        while(!q.isEmpty()) {
            int cur = q.poll();
            for (int nxt : adj[cur]) {
                if (!vis[nxt]) {
                    q.add(nxt); vis[nxt] = true; dis[idx][nxt] = dis[idx][cur] + 1;
                }
            }
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
