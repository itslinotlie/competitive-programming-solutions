//04/01/20
// https://dmoj.ca/problem/dmopc13c1p4
package DMOPC_13;

import java.util.*;
import java.io.*;

public class C1P4AFK {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int x, y, dis[][], MV = (int)1e2;
    static char g[][];
    static boolean vis[][];
    static int x1, y1, x2, y2;
    static int m[][] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
    public static void main (String[] args) throws IOException {
        int T = readInt();
        for (int t=0;t<T;t++) {
            x = readInt(); y = readInt(); 
            dis = new int[y][x]; g = new char[y][x]; vis = new boolean[y][x];
            for (int i=0;i<y;i++) {
                Arrays.fill(dis[i], MV);
                String line = readLine();
                for (int j=0;j<x;j++) {
                    g[i][j] = line.charAt(j);
                    if(g[i][j] == 'C') {x1=j; y1=i;}
                    if(g[i][j] == 'W') {x2=j; y2=i;}
                }
            }
            bfs(y1, x1);
            System.out.println(dis[y2][x2]>=60? "#notworth":dis[y2][x2]);
            for (int i=0;i<y;i++) System.out.println(Arrays.toString(dis[i]));
        }
    }
    static void bfs(int y0, int x0) {
        Queue<pt> q = new LinkedList();
        q.add(new pt(x0, y0));
        dis[y0][x0] = 0; vis[y0][x0] = true;
        while (!q.isEmpty()) {
            pt tmp = q.poll();
            for (int i=0;i<4;i++) {
                int xx = tmp.x+m[i][0], yy = tmp.y+m[i][1];
                if (xx<0 || xx>=x || yy<0 || yy>=y || g[yy][xx]=='X' || vis[yy][xx]) continue;
                q.add(new pt(xx, yy));
                vis[yy][xx] = true;
                dis[yy][xx] = dis[tmp.y][tmp.x] + 1;
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
