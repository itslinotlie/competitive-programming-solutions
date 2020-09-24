// 04/04/2020
// https://dmoj.ca/problem/ccc08s3
package CCC_08;

import java.util.*;
import java.io.*;

public class S3Maze {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int r, c;
    static char g[][];
    static int dis[][], a[][] = {{1,0},{-1,0},{0,1},{0,-1}}, u[][] = {{1,0},{-1,0}}, l[][] = {{0,1},{0,-1}};
    static boolean vis[][];
    public static void main (String[] args) throws IOException {
        int T = readInt();
        for (int t=0;t<T;t++) {
            r = readInt(); c = readInt();
            g = new char[r+1][c+1]; dis = new int[r+1][c+1]; vis = new boolean[r+1][c+1];
            for (int i=1;i<=r;i++) {
                String tmp = readLine();
                for (int j=1;j<=c;j++) g[i][j] = tmp.charAt(j-1);
            }
            bfs(1, 1);
            System.out.println(dis[r][c]==0? -1:dis[r][c]);
        }
    }
    static void bfs(int y, int x) {
        Queue<pt> q = new LinkedList();
        q.add(new pt(y, x));
        dis[y][x] = 1; vis[y][x] = true;
        while(!q.isEmpty()) {
            pt tmp = q.poll();
            switch (g[tmp.y][tmp.x]) {
                case '+':
                    for (int i=0;i<4;i++) {
                        int yy = tmp.y+a[i][0], xx = tmp.x+a[i][1];
                        if (yy<=0 || yy>r || xx<=0 || xx>c || vis[yy][xx] || g[yy][xx]=='*') continue;
                        q.add(new pt(yy, xx)); vis[yy][xx] = true; dis[yy][xx] = dis[tmp.y][tmp.x]+1;
                    } break;
                case '|':
                    for (int i=0;i<2;i++) {
                        int yy = tmp.y+u[i][0], xx = tmp.x+u[i][1];
                        if (yy<=0 || yy>r || xx<=0 || xx>c || vis[yy][xx] || g[yy][xx]=='*') continue;
                        q.add(new pt(yy, xx)); vis[yy][xx] = true; dis[yy][xx] = dis[tmp.y][tmp.x]+1;
                    } break;
                case '-':
                    for (int i=0;i<2;i++) {
                        int yy = tmp.y+l[i][0], xx = tmp.x+l[i][1];
                        if (yy<=0 || yy>r || xx<=0 || xx>c || vis[yy][xx] || g[yy][xx]=='*') continue;
                        q.add(new pt(yy, xx)); vis[yy][xx] = true; dis[yy][xx] = dis[tmp.y][tmp.x]+1;
                    } break;
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
