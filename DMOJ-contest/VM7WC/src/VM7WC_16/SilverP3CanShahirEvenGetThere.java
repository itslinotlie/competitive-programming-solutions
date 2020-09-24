// 01/21/2020
// https://dmoj.ca/problem/vmss7wc16c3p2
package VM7WC_16;

import java.util.*;
import java.io.*;

public class SilverP3CanShahirEvenGetThere {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), m = in.nextInt(), a = in.nextInt(), b = in.nextInt();
        List<Integer>[] adj = new ArrayList[n+1];
        for (int i=1;i<=n;i++) adj[i] = new ArrayList();
        for (int i=0;i<m;i++) {
            int x = in.nextInt(), y = in.nextInt();
            adj[x].add(y); adj[y].add(x);
        }
        
        int dis[] = new int[n+1];
        boolean vis[] = new boolean[n+1];
        Queue<Integer> q = new LinkedList<>();
        q.add(a); vis[a] = true; dis[a] = 1; 
        while (!q.isEmpty()) {
            int cur = q.poll(); 
            for (int nxt : adj[cur]) {
                if (!vis[nxt]) {
                    vis[nxt] = true; dis[nxt] = dis[cur]+1; q.add(nxt);
                }
            }
        }
        System.out.println(vis[b]? "GO SHAHIR!" : "NO SHAHIR!");
    }
}