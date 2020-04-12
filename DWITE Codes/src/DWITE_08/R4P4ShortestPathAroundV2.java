// 04/01/2020
//https://dmoj.ca/problem/dwite08c4p4
package DWITE_08;

import java.util.*;
import java.io.*;

public class R4P4ShortestPathAroundV2 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static char g[][] = new char[8+1][8+1];
    static boolean vis[][] = new boolean[8+1][8+1];
    static int x1, y1, x2, y2, dis[][] = new int[8+1][8+1];
    static int m[][] = {{-1,-1},{0,-1},{-1,0},{1,-1},{-1,1},{1,0},{0,1},{1,1}}, MV = (int)1e6;
    public static void main (String[] args) throws IOException {
        for (int t=0;t<5;t++) {
            for (int i=1;i<=8;i++) {
                Arrays.fill(dis[i], MV);
                Arrays.fill(vis[i], false);
                String line = readLine();
                for (int j=1;j<=8;j++) {
                    g[i][j] = line.charAt(j-1);
                    if (g[i][j]=='A') {y1=i;x1=j;}
                    if (g[i][j]=='B') {y2=i;x2=j;}
                }
            }
            bfs(x1, y1);
            System.out.println(dis[y2][x2]);
        }
    }
    static void bfs(int x0, int y0) {
        Queue<pt> q = new LinkedList();
        q.add(new pt(x0, y0));
        dis[y0][x0] = 0;
        vis[y0][x0] = true;
        while(!q.isEmpty()) {
            pt tmp = q.poll();
            for (int i=0;i<8;i++) {
                int xx = tmp.x+m[i][0], yy = tmp.y+m[i][1];
                if (xx<=0 || xx>8 || yy<=0 || yy>8 || g[yy][xx]=='#' || vis[yy][xx]) continue;
                q.add(new pt(xx, yy));
                dis[yy][xx] = dis[tmp.y][tmp.x] + 1;
                vis[yy][xx] = true; 
            }
        }
        
    }
    static class pt{
        int x, y;
        pt (int x, int y) {this.x=x;this.y=y;}
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
