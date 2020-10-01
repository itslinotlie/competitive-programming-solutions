// 04/05/2020
// https://dmoj.ca/problem/ecoo17r2p2
package ECOO_17;

import java.util.*;
import java.io.*;

public class R2P2TreasureHunt {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, y1, x1, key = 0, ans = 0;
    static int m[][] = {{1,0},{-1,0},{0,1},{0,-1}};
    static char g[][];
    static boolean vis[][];
    public static void main (String[] args) throws IOException {
        for (int t=0;t<10;t++) {
            n = readInt();
            g = new char[n+1][n+1]; vis = new boolean[n+1][n+1];
            for (int i=1;i<=n;i++) {
                String tmp = readLine();
                for (int j=1;j<=n;j++) {
                    g[i][j] = tmp.charAt(j-1);
                    if(g[i][j]=='S') {y1=i;x1=j; g[i][j]='.';}
                }
            }
            bfs(y1, x1);
            System.out.println(ans); key = 0; ans = 0;
        }
    }
    static void bfs(int y0, int x0) {
        Queue<pt> q = new LinkedList();
        for (int i=1;i<=n;i++) Arrays.fill(vis[i], false);
        q.add(new pt(y0, x0)); vis[y0][x0] = true;
        while(!q.isEmpty()) {
            pt tmp = q.poll();
            for (int i=0;i<4;i++) {
                int yy = tmp.y+m[i][0], xx = tmp.x+m[i][1];
                if (yy<=0 || yy>n || xx<=0 || xx>n || vis[yy][xx] || g[yy][xx]=='#') continue;
                if(g[yy][xx]=='.') {q.add(new pt(yy, xx)); vis[yy][xx] = true;}
                else if (g[yy][xx]=='K') {
                    key++; g[yy][xx]='.';
                    q.add(new pt(yy, xx)); vis[yy][xx] = true;
                    bfs(yy, xx);
                }
                else if (g[yy][xx]>='1' && g[yy][xx]<='9') {
                    if (key>=g[yy][xx]-'0') {
                        g[yy][xx]='.';
                        q.add(new pt(yy, xx)); vis[yy][xx] = true;
                    }
                }
                else if (g[yy][xx]=='T') {
                    g[yy][xx]='.'; ans++;
                    q.add(new pt(yy, xx)); vis[yy][xx] = true;
                }
            }
        }
    }
    static class pt {
        int y, x;
        public pt(int y, int x) {this.y=y;this.x=x;}
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
