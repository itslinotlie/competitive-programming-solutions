// 04/01/2020
//https://dmoj.ca/problem/pwindsor18p6
package pp7;

import java.util.*;
import java.io.*;

public class YouCantWriteScienceFictionBetterThanThis {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, m, a, b, cnt = 0, MV = (int)1e6;
    static List<Integer> adj[];
    static int dis[];
    static boolean vis[];
    public static void main (String[] args) throws IOException {
        n = readInt(); m = readInt(); a = readInt(); b = readInt();
        adj = new ArrayList[n+1]; dis = new int[n+1]; vis = new boolean[n+1];
        for (int i=1;i<=n;i++) adj[i] = new ArrayList();
        Arrays.fill(dis, MV); Arrays.fill(vis, false);
        for (int i=0;i<m;i++) {
            int x = readInt(), y = readInt();
            adj[x].add(y); adj[y].add(x);
        }
        cnt+=BFS(1, a);
        Arrays.fill(dis, MV); Arrays.fill(vis, false);
        cnt+=BFS(a, b);
        System.out.println(cnt>=MV?"-1":cnt);
    }
    static int BFS(int start, int end) {
        Queue<Integer> q = new LinkedList();
        q.add(start); dis[start] = 0; vis[start] = true;
        while(!q.isEmpty()) {
            int cur = q.poll();
            for (int nxt : adj[cur]) {
                if (!vis[nxt]) {
                    vis[nxt] = true; dis[nxt] = dis[cur]+1; q.add(nxt);
                }
            }
        }
        return dis[end];
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
