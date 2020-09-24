// 04/04/2020
//https://dmoj.ca/problem/dpg
package pp10;

import java.util.*;
import java.io.*;

public class LongestPath {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, m, ans = -1;
    static List<Integer> adj[];
    static int dis[], dp[];
    static boolean vis[];
    public static void main (String[] args) throws IOException {
        n = readInt(); m = readInt();
        adj = new ArrayList[n+1]; dis = new int[n+1]; dp = new int[n+1]; vis = new boolean[n+1];
        for (int i=1;i<=n;i++) adj[i] = new ArrayList();
        for (int i=0;i<m;i++) {
            int a = readInt(), b = readInt();
            adj[a].add(b);
        }
        for (int i=1;i<=n;i++) {
            if(!vis[i]) {
                dfs(i);
                vis[i] = true;
                ans = Math.max(ans, dp[i]);
            }
        }
        System.out.println(ans);
    }
    static void dfs(int i) {
        for (int x : adj[i]) {
            if(!vis[x]) {
                dfs(x);
                vis[x] = true;
            }
            dp[i] = Math.max(dp[i], dp[x]+1);
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
