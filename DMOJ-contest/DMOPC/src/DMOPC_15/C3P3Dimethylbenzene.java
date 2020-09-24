// 04/04/2020
// https://dmoj.ca/problem/dmopc15c3p3
package DMOPC_15;

import java.util.*;
import java.io.*;

public class C3P3Dimethylbenzene {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, m, ans=-1;
    static List<Integer> adj[];
    static boolean vis[];
    static int dis[];
    public static void main (String[] args) throws IOException {
        n = readInt(); m = readInt();
        adj = new ArrayList[n+1]; vis = new boolean[n+1]; dis = new int[n+1];
        for (int i=1;i<=n;i++) adj[i] = new ArrayList();
        for (int i=0;i<m;i++) {
            int a = readInt(), b = readInt();
            adj[a].add(b);
        }
        for (int i=1;i<=n;i++) {
            if(!vis[i]) {
                vis[i] = true;
                dfs(i);
            }
        }
        System.out.println(ans>=6? "YES":"NO");
    }
    static void dfs(int n) {
        for (int x : adj[n]) {
            if(!vis[x]) {    
                vis[x] = true;
                dis[x] = dis[n]+1;
                dfs(x);
            }
            else {
                ans = Math.max(ans, Math.abs(dis[n]-dis[x])+1);
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
