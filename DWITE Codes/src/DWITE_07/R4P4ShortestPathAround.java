// 04/01/2020
// https://dmoj.ca/problem/dwite07c4p4
package DWITE_07;

import java.util.*;
import java.io.*;

public class R4P4ShortestPathAround {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int x1, y1, x2, y2, MV = (int)1e6;
    static char g[][] = new char[10+1][10+1];
    static boolean vis[][] = new boolean[10+1][10+1], FLAG = false;
    static int dis[][] = new int[10+1][10+1], m[][] =  {{-1,-1},{0,-1},{-1,0},{1,-1},{-1,1},{1,0},{0,1},{1,1}};
    public static void main (String[] args) throws IOException {
        for (int t=0;t<5;t++) {
            for (int i=1;i<=10;i++) {
                Arrays.fill(dis[i], MV);
                Arrays.fill(vis[i], false);
                String line = readLine();
                for (int j=1;j<=10;j++) {
                    g[i][j] = line.charAt(j-1);
                    if (g[i][j]=='X') {
                        if (FLAG) {x2=j;y2=i;FLAG=false;}
                        else {x1=j;y1=i;FLAG=true;}
                    }
                }
            }
            bfs(x1, y1);
            System.out.println(dis[y2][x2]);
            readLine();
        }
    }
    static void bfs(int x0, int y0) {
        Queue<pt> q = new LinkedList();
        q.add(new pt(x0, y0));
        dis[y0][x0] = 0;
        vis[y0][x0] = true;
        while(!q.isEmpty()) {
            pt p = q.poll();
            for (int i=0;i<8;i++) {
                int xx = p.x+m[i][0], yy = p.y+m[i][1];
                if (xx<=0 || xx>10 || yy<=0 || yy>10 || g[yy][xx]=='#' || vis[yy][xx]) continue;
                q.add(new pt(xx, yy));
                dis[yy][xx] = dis[p.y][p.x] + 1;
                vis[yy][xx] = true;
            }
        }
    }
    static class pt {
        int x, y;
        pt(int x, int y) {this.x=x;this.y=y;}
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
