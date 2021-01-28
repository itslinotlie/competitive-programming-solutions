// 04/04/2020
// https://dmoj.ca/problem/gfssoc16s1

import java.util.*;
import java.io.*;

public class gfssoc16s1 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, t;
    static String bk[];
    static List<Integer> adj[];
    static boolean vis[];
    static int dis[];
    public static void main (String[] args) throws IOException {
        n = readInt(); t = readInt();
        vis = new boolean[n+3]; dis = new int[n+3];
        bk = new String[n+1]; for (int i=1;i<=n;i++) bk[i] = readLine();
        adj = new ArrayList[n+3]; for (int i=1;i<=n+2;i++) adj[i] = new ArrayList();
        for (int i=0;i<t;i++) {
            String tmp[] = readLine().split("[-]");
            int a = find(tmp[0]), b = find(tmp[1]);
            adj[a].add(b); adj[b].add(a);
        }
        bfs(n+1);
        System.out.println(dis[n+2]==0? "RIP ACE":dis[n+2]);
    }
    static void bfs(int x) {
        Queue<Integer> q = new LinkedList();
        q.add(x);
        vis[x] = true; dis[x] = 0;
        while(!q.isEmpty()) {
            int cur = q.poll();
            for (int nxt : adj[cur]) {
                if(!vis[nxt]) {
                    q.add(nxt); vis[nxt] = true; dis[nxt] = dis[cur] + 1;
                }
            }
        }
    }
    static int find(String x) {
        if (x.equals("home")) return n+1;
        if (x.equals("Waterloo GO")) return n+2;
        for (int i=1;i<=n;i++) {
            if (bk[i].equals(x)) return i;
        }
        return -1;
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
