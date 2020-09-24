// 04/04/2020
// https://dmoj.ca/problem/dwite10c3p4
package DWITE_10;

import java.util.*;
import java.io.*;

public class dwite10c3p4 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int dis[][] = new int[10+1][10+1], m[][] = {{1,0},{-1,0},{0,1},{0,-1}}, ans = -1;
    static char g[][] = new char[10+1][10+1];
    static boolean vis[][] = new boolean[10+1][10+1];
    static List<pt> adj = new ArrayList(), tree = new ArrayList();
    public static void main (String[] args) throws IOException {
        for (int t=0;t<5;t++) {
            for (int i=1;i<=10;i++) {
                String tmp = readLine();
                for (int j=1;j<=10;j++) {
                    g[i][j] = tmp.charAt(j-1);
                    if(g[i][j]=='F') adj.add(new pt(i, j));
                    if(g[i][j]=='T') tree.add(new pt(i, j));
                }
            }
            bfs();
            boolean FLAG = false;
            for (pt cur : tree) {
                if (!vis[cur.y][cur.x]) {FLAG = true; break;}
            }
            
            System.out.println(FLAG? -1:ans);
            for (int i=1;i<=10;i++) {
                Arrays.fill(dis[i], 0); Arrays.fill(vis[i], false);
                tree.clear(); adj.clear();
            }
            ans = -1;
            readLine();
        }
    }
    static void bfs() {
        Queue<pt> q = new LinkedList();
        for (pt cur : adj) {
            q.add(cur);
            vis[cur.y][cur.x] = true; dis[cur.y][cur.x] = 0;
        }
        while(!q.isEmpty()) {
            pt tmp = q.poll();
            for (int i=0;i<4;i++) {
                int xx = tmp.x+m[i][0], yy = tmp.y+m[i][1];
                if (xx<=0 || xx>10 || yy<=0 || yy>10 || vis[yy][xx] || g[yy][xx]!='T') continue;
                q.add(new pt(yy, xx)); vis[yy][xx] = true; dis[yy][xx] = dis[tmp.y][tmp.x] + 1; 
                ans = Math.max(ans, dis[yy][xx]);
            }
        }
    }
    static class pt {
        int x, y;
        public pt(int y, int x) {this.x=x;this.y=y;}
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