// 04/03/2020
//https://dmoj.ca/problem/dmopc14c1p5
package DMOPC_14;

import java.util.*;
import java.io.*;

public class C1P5SurpriseTeleport {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int r, c, x1, y1, x2, y2;
    static int dis[][], m[][] = {{1,0},{-1,0},{0,1},{0,-1}};
    static boolean vis[][];
    static char g[][];
    public static void main (String[] args) throws IOException {
        r = readInt(); c = readInt();
        dis = new int[r+1][c+1]; vis = new boolean[r+1][c+1]; g = new char[r+1][c+1];
        y1 = readInt()+1; x1 = readInt()+1; y2 = readInt()+1; x2 = readInt()+1;
        for (int i=1;i<=r;i++) {
            String tmp = readLine();
            for (int j=1;j<=c;j++) g[i][j] = tmp.charAt(j-1);
        }
        int t = readInt(); pt pt[] = new pt[t+1];
        for (int i=1;i<=t;i++) pt[i] = new pt(readInt()+1, readInt()+1);
        bfs(y1, x1);
        int off = dis[y2][x2], max = 0;
        for (int i=1;i<=t;i++) {
            int x = pt[i].x, y = pt[i].y, val = dis[y][x];
            if (x==x1&&y==y1) max = off;
            if (val==0) continue;
            max = Math.max(max, off-val);
        }
        System.out.println(max);
    }
    static void bfs(int y, int x) {
        Queue<pt> q = new LinkedList();
        q.add(new pt(y, x));
        vis[y][x] = true; dis[y][x] = 0;
        while(!q.isEmpty()) {
            pt tmp = q.poll();
            for (int i=0;i<4;i++) {
                int yy = tmp.y+m[i][0], xx = tmp.x+m[i][1];
                if (yy<=0 || yy>r || xx<=0 || xx>c || vis[yy][xx] || g[yy][xx]=='X') continue;
                q.add(new pt(yy, xx));
                vis[yy][xx] = true; dis[yy][xx] = dis[tmp.y][tmp.x] + 1;
            }
        }
    }
    static class pt {
        int y, x;
        public pt (int y, int x) {this.y=y;this.x=x;}
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
