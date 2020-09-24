// 04/14/2020
// https://dmoj.ca/problem/vmss7wc15c4p3
package VM7WC_15;

import java.util.*;
import java.io.*;

public class GoldP4ChainRule {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, m, max, dis[], tmp[];
    static List<Edge> adj[];
    public static void main (String[] args) throws IOException {
        n = readInt(); m = readInt();
        adj = new ArrayList[n+1]; dis = new int[n+1]; tmp = new int[n+1];
        for (int i=1;i<=n;i++) adj[i] = new ArrayList();
        for (int i=0;i<m;i++) {
            int u = readInt()+1, v = readInt()+1, w = readInt();
            adj[u].add(new Edge(v, w)); adj[v].add(new Edge(u, w));
        }
        Dijkstra(1); max = -1;
        tmp = Arrays.copyOf(dis, n+1);
        Dijkstra(n);
        for (int i=1;i<=n;i++)  max = Math.max(max, tmp[i]+dis[i]);
        System.out.println(max);
    }
    static void Dijkstra(int st) {
        PriorityQueue<Edge> pq = new PriorityQueue();
        Arrays.fill(dis, 1, n+1, 0x3f3f3f3f);
        pq.add(new Edge(st, 0)); dis[st] = 0;
        while(!pq.isEmpty()) {
            Edge u = pq.poll();
            if (u.w > dis[u.v]) continue;
            for (Edge e : adj[u.v]) {
                if (dis[e.v] > dis[u.v] + e.w) {
                    dis[e.v] = dis[u.v] + e.w;
                    pq.add(new Edge(e.v, dis[e.v]));
                }
            }
        }
    }
    static class Edge implements Comparable<Edge>{
        int v, w;
        public Edge(int v, int w) {this.v=v;this.w=w;}
        public int compareTo(Edge u) {return -Integer.compare(u.w, w);}
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
