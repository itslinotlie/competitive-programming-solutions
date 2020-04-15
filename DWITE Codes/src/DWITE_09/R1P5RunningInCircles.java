// 04/04/2020
//https://dmoj.ca/problem/dwite09c1p5
package DWITE_09;

import java.util.*;
import java.io.*;

public class R1P5RunningInCircles {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, ans = -1, MV = (int)1e2;
    static int dis[] = new int[MV+1];
    static boolean vis[] = new boolean[MV+1];
    static List<Integer> adj[] = new ArrayList[MV+1];
    public static void main (String[] args) throws IOException {
        for (int t=0;t<5;t++) {
            n = readInt();
            for (int i=1;i<=MV;i++) adj[i] = new ArrayList();
            for (int i=0;i<n;i++) {
                int a = readInt(), b = readInt();
                adj[a].add(b);
            }
            for (int i=1;i<=MV;i++) {
                if (!vis[i]) {
                    vis[i] = true;
                    dfs(i);
                }
            }
            System.out.println(ans+1);
            Arrays.fill(dis, 0); Arrays.fill(vis, false); ans = -1;
        }
    }
    static void dfs(int i) {
        for (int cur : adj[i]) {
            if(!vis[cur]) {
                vis[cur] = true;
                dis[cur] = dis[i] + 1;
                dfs(cur);
            }
            else {
                ans = Math.abs(dis[cur]-dis[i]);
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
