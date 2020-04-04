// 04/03/2020
//https://dmoj.ca/problem/hci16oversleep
package pp10;

import java.util.*;
import java.io.*;

public class Oversleep {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int r, c, x1, y1, x2, y2, MV = (int)1e8;
    static char g[][];
    static int dis[][], m[][] = {{1,0},{-1,0},{0,1},{0,-1}};
    static boolean vis[][];
    public static void main (String[] args) throws IOException {
        r = readInt(); c = readInt();
        g = new char[r+1][c+1]; dis = new int[r+1][c+1]; vis = new boolean[r+1][c+1];
        for (int i=1;i<=r;i++) {
            Arrays.fill(dis[i], MV);
            String tmp = readLine();
            for (int j=1;j<=c;j++) {
                g[i][j] = tmp.charAt(j-1);
                if (g[i][j]=='s') {y1=i;x1=j;}
                if (g[i][j]=='e') {y2=i;x2=j;}
            }
        }
        bfs(x1,y1);
        System.out.println(dis[y2][x2]==MV? -1:dis[y2][x2]);
    }
    static void bfs(int x, int y) {
        Queue<pt> q = new LinkedList();
        q.add(new pt(x, y));
        vis[y][x] = true; dis[y][x] = -1;
        while(!q.isEmpty()) {
            pt tmp = q.poll();
            for (int i=0;i<4;i++) {
                int xx = tmp.x+m[i][0], yy = tmp.y+m[i][1];
                if (xx<=0 || xx>c || yy<=0 || yy>r || vis[yy][xx] || g[yy][xx]=='X') continue;
                q.add(new pt (xx, yy)); vis[yy][xx] = true; dis[yy][xx] = dis[tmp.y][tmp.x]+1;
            }
        }
    }
    static class pt {
        int x, y;
        public pt (int x, int y) {this.x=x;this.y=y;}
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
